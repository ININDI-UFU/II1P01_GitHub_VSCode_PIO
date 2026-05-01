param(
    [string]$Port = "COM9"
)

$ErrorActionPreference = "Stop"

function Set-LineState {
    param(
        [System.IO.Ports.SerialPort]$Serial,
        [bool]$Dtr,
        [bool]$Rts,
        [int]$DelayMs = 100
    )

    $Serial.DtrEnable = $Dtr
    $Serial.RtsEnable = $Rts
    Start-Sleep -Milliseconds $DelayMs
}

Write-Host "Tentando colocar ESP32-S3 em bootloader pela $Port..." -ForegroundColor Cyan
Write-Host "DTR controla BOOT/IO0 e RTS controla RESET/EN em placas com auto-reset."

$before = @(Get-PnpDevice -PresentOnly -ErrorAction SilentlyContinue |
    Where-Object { $_.InstanceId -match 'VID_303A.*PID_1001' } |
    ForEach-Object { $_.InstanceId.ToUpperInvariant() })

$serial = [System.IO.Ports.SerialPort]::new($Port, 115200, [System.IO.Ports.Parity]::None, 8, [System.IO.Ports.StopBits]::One)
$serial.Handshake = [System.IO.Ports.Handshake]::None
$serial.ReadTimeout = 500
$serial.WriteTimeout = 500

try {
    $serial.Open()

    # Sequencia usada por placas ESP32 com circuito auto-reset:
    # IO0 baixo durante o pulso de EN/RESET, depois solta RESET mantendo
    # IO0 baixo por alguns instantes, e por fim solta IO0.
    Set-LineState -Serial $serial -Dtr $false -Rts $false -DelayMs 100
    Set-LineState -Serial $serial -Dtr $true  -Rts $false -DelayMs 100
    Set-LineState -Serial $serial -Dtr $true  -Rts $true  -DelayMs 250
    Set-LineState -Serial $serial -Dtr $true  -Rts $false -DelayMs 500
    Set-LineState -Serial $serial -Dtr $false -Rts $false -DelayMs 100
}
finally {
    if ($serial.IsOpen) {
        $serial.Close()
    }
    $serial.Dispose()
}

Start-Sleep -Seconds 2

$devices = @(Get-PnpDevice -PresentOnly -ErrorAction SilentlyContinue |
    Where-Object { $_.InstanceId -match 'VID_303A' } |
    Select-Object Class, FriendlyName, InstanceId, Status)

$devices | Format-List

$afterBoot = @($devices |
    Where-Object { $_.InstanceId -match 'VID_303A.*PID_1001' } |
    ForEach-Object { $_.InstanceId.ToUpperInvariant() })

$newBootDevice = @($afterBoot | Where-Object { $before -notcontains $_ })
$targetStillOnOriginalPort = @($devices | Where-Object {
    $_.FriendlyName -match "\($([regex]::Escape($Port))\)" -and
    $_.InstanceId -match 'VID_303A.*PID_4001'
})

if ($newBootDevice.Count -gt 0 -or $targetStillOnOriginalPort.Count -eq 0) {
    Write-Host "ESP32-S3 entrou em bootloader/download mode." -ForegroundColor Green
} else {
    Write-Host "Nao entrou em bootloader. Esta placa/USB-IP pode nao repassar DTR/RTS ou o firmware nao permite reset automatico." -ForegroundColor Yellow
}

# 📘 Instrumentação Industrial I - GitHub, VSCode e PlatformIO com ESP32.
> **Professor**: Josué Morais  
> **Disciplina**: Instrumentação Industrial I  
> **Curso**: Engenharia de Controle e Automação  
> **Instituição**: Universidade Federal de Uberlândia — FEELT  

<details close>
  <summary><strong> 📑 Índice </strong></summary>

- [🎯 Objetivo](#objetivo)
- [📖 Introdução](#introducao)
- [🧰 Pré-requisitos](#pre-requisitos)
  - [Software](#software)
  - [Hardware](#hardware)

- [⬇️ Baixando o pacote ININDUFU](#baixando)
  - [Passo 1 – Acessar o link do instalador da disciplina](#baixando-passo-1)
  - [Passo 2 – Iniciar o download do arquivo no navegador](#baixando-passo-2)
  - [Passo 3 – Escolher salvar o instalador](#baixando-passo-3)
  - [Passo 4 – Definir o local onde o arquivo será salvo](#baixando-passo-4)
  - [Passo 5 – Abrir a lista de downloads do navegador](#baixando-passo-5)
  - [Passo 6 – Selecionar a opção para manter o arquivo](#baixando-passo-6)
  - [Passo 7 – Confirmar que deseja manter o instalador](#baixando-passo-7)

- [🖥️ Instalando o pacote ININDUFU](#computador)
  - [Passo 1 – Localizar o instalador do pacote ININDUFU](#computador-passo-1)
  - [Passo 2 – Abrir os detalhes do alerta do Windows](#computador-passo-2)
  - [Passo 3 – Executar o instalador mesmo assim](#computador-passo-3)
  - [Passo 4 – Iniciar o assistente de instalação](#computador-passo-4)
  - [Passo 5 – Conferir os componentes incluídos no pacote](#computador-passo-5)
  - [Passo 6 – Definir a pasta de instalação](#computador-passo-6)
  - [Passo 7 – Confirmar o início da instalação](#computador-passo-7)
  - [Passo 8 – Concluir a instalação do pacote](#computador-passo-8)
  - [Passo 9 – Encerrar a tela final do instalador](#computador-passo-9)

- [🐍 Instalando o python](#python)
  - [Passo 1 – Selecionar a instalação personalizada e habilitar o PATH](#python-passo-1)
  - [Passo 2 – Confirmar os recursos opcionais](#python-passo-2)
  - [Passo 3 – Ajustar as opções avançadas](#python-passo-3)
  - [Passo 4 – Aguardar a instalação do interpretador](#python-passo-4)
  - [Passo 5 – Finalizar o assistente do Python](#python-passo-5)
  - [Passo 6 – Validar a instalação no Prompt de Comando](#python-passo-6)

- [🌿 Instalando o git](#git)
  - [Passo 1 – Avançar pela tela inicial do instalador](#git-passo-1)
  - [Passo 2 – Definir a pasta de instalação do Git](#git-passo-2)
  - [Passo 3 – Conferir os componentes adicionais](#git-passo-3)
  - [Passo 4 – Escolher a pasta do menu Iniciar](#git-passo-4)
  - [Passo 5 – Manter o editor padrão do Git](#git-passo-5)
  - [Passo 6 – Definir o nome da branch inicial](#git-passo-6)
  - [Passo 7 – Ajustar o ambiente PATH](#git-passo-7)
  - [Passo 8 – Escolher o executável SSH](#git-passo-8)
  - [Passo 9 – Selecionar o backend HTTPS](#git-passo-9)
  - [Passo 10 – Configurar a conversão de fim de linha](#git-passo-10)
  - [Passo 11 – Escolher o terminal do Git Bash](#git-passo-11)
  - [Passo 12 – Definir o comportamento do git pull](#git-passo-12)
  - [Passo 13 – Habilitar o gerenciador de credenciais](#git-passo-13)
  - [Passo 14 – Conferir as opções extras](#git-passo-14)
  - [Passo 15 – Revisar as opções experimentais](#git-passo-15)
  - [Passo 16 – Finalizar a instalação do Git](#git-passo-16)

- [🔌 Instalando o com0com](#com0com)
  - [Passo 1 – Iniciar o assistente do com0com](#com0com-passo-1)
  - [Passo 2 – Aceitar o contrato de licença](#com0com-passo-2)
  - [Passo 3 – Confirmar os componentes da instalação](#com0com-passo-3)
  - [Passo 4 – Definir a pasta de destino](#com0com-passo-4)
  - [Passo 5 – Autorizar a instalação do driver](#com0com-passo-5)
  - [Passo 6 – Aguardar a cópia dos arquivos](#com0com-passo-6)
  - [Passo 7 – Encerrar o assistente do com0com](#com0com-passo-7)

- [💻 Instalando o VSCode](#vscode)
  - [Passo 1 – Escolher o modo de instalação do VS Code](#vscode-passo-1)
  - [Passo 2 – Confirmar o aviso do instalador](#vscode-passo-2)
  - [Passo 3 – Aceitar o contrato de licença](#vscode-passo-3)
  - [Passo 4 – Selecionar as tarefas adicionais](#vscode-passo-4)
  - [Passo 5 – Iniciar a instalação do VS Code](#vscode-passo-5)
  - [Passo 6 – Concluir a instalação do editor](#vscode-passo-6)
  - [Passo 7 – Fechar o prompt do instalador](#vscode-passo-7)

- [🛠️ Instalando extensões no VScode](#extensions)
  - [Passo 1 – Instalar o Git & GitHub Extension Pack](#extensions-passo-1)
  - [Passo 2 – Instalar a extensão LasecGitSession](#extensions-passo-2)
  - [Passo 3 – Instalar a extensão lasecplot](#extensions-passo-3)
  - [Passo 4 – Instalar o Python Extension Pack](#extensions-passo-4)
  - [Passo 5 – Instalar o PlatformIO IDE](#extensions-passo-5)
  - [Passo 6 – Instalar a extensão Open in External App](#extensions-passo-6)
  - [Passo 7 – Instalar a extensão Batch Runner](#extensions-passo-7)

- [Fazendo um fork no github](#fork)

- [🆕 Configurando o platformio no VSCode][def]  
  - [Passo 1 – Abrir a PIO Home e iniciar um novo projeto](#new-platformio-passo-1)
  - [Passo 2 – Preencher o assistente de criação do projeto](#new-platformio-passo-2)
  - [Passo 3 – Aguardar a geração da estrutura PlatformIO](#new-platformio-passo-3)
  - [Passo 4 – Conferir os arquivos do projeto criado](#new-platformio-passo-4)

- [☁️ Fazendo uma publicação do VSCode no github](#github)
  - [Passo 1 – Iniciar a publicação do projeto no GitHub](#github-passo-1)
  - [Passo 2 – Autorizar o acesso à conta GitHub](#github-passo-2)
  - [Passo 3 – Definir o nome e a visibilidade do repositório](#github-passo-3)
  - [Passo 4 – Conferir os arquivos preparados para versionamento](#github-passo-4)
  - [Passo 5 – Criar o primeiro commit e configurar a identidade Git](#github-passo-5)
  - [Passo 6 – Validar a publicação no GitHub](#github-passo-6)

- [📝 Boas práticas para mensagens de commit](#boas-praticas-para-mensagens-de-commit)
- [📊 Tratamento e análise](#tratamento-e-analise)
- [🧪 Tarefa a ser executada](#tarefa-a-ser-executada)
- [✅ Resultado esperado](#resultado-esperado)
- [⚠️ Observações importantes](#observacoes-importantes)
- [📚 Referências](#referencias)

</details>

---
<a id="objetivo"></a>
<details close>
  <summary><strong> 🎯 Objetivo </strong></summary>

Este tutorial tem como objetivo orientar, de forma **didática e passo a passo**, a preparação do ambiente de desenvolvimento utilizado na disciplina de **Instrumentação Industrial I**, envolvendo a instalação e a configuração de ferramentas essenciais como **Python**, **Git**, **VS Code**, **GitHub**, **com0com** e **PlatformIO** para uso com a **ESP32**.

Ao final deste procedimento, o ambiente estará:
- ✅ Preparado para criar projetos com ESP32 no VS Code
- ✅ Integrado com Git e GitHub para versionamento
- ✅ Configurado com PlatformIO para compilar e organizar o projeto
- ✅ Pronto para testes práticos com comunicação serial e exemplos sem uso de `delay()`

</details>

---
<a id="introducao"></a>
<details close>
  <summary><strong> 📖 Introdução </strong></summary>

Este projeto explora o uso integrado do GitHub, Visual Studio Code (VSCode) e PlatformIO para o desenvolvimento de aplicações com ESP32. Essa combinação de ferramentas facilita o controle de versão, a colaboração em equipe e o desenvolvimento eficiente para microcontroladores. Aqui estão algumas informações importantes sobre as ferramentas utilizadas:

#### GitHub
O GitHub é uma plataforma poderosa para controle de versão e colaboração em projetos. Ele permite:
- Gerenciar código fonte com Git.
- Colaborar em equipe com pull requests e revisões de código.
- Acompanhar o histórico de alterações do projeto.

Com a integração do GitHub no VSCode, é possível realizar operações como commits, push, pull, criação de branches e análise de pull requests diretamente no editor.

#### Visual Studio Code (VSCode)
O VSCode é um editor de código-fonte leve e altamente extensível que suporta diversas linguagens e ferramentas. Com extensões como PlatformIO IDE e GitHub, ele se torna uma poderosa estação de trabalho para desenvolvedores de microcontroladores.

Funcionalidades principais:
- Depuração integrada.
- Controle de versão com Git e GitHub.
- Suporte a extensões como GitLens, GitHub Pull Requests and Issues e PlatformIO.

#### PlatformIO
O PlatformIO é um ambiente de desenvolvimento integrado (IDE) que facilita o desenvolvimento para microcontroladores, como o ESP32. Ele oferece:
- Gerenciamento simplificado de bibliotecas e dependências.
- Ferramentas de construção, upload e depuração.
- Suporte a múltiplos frameworks, incluindo Arduino e ESP-IDF.

</details>

---
<a id="pre-requisitos"></a>
<details close>
  <summary><strong> 🧰 Pré-requisitos </strong></summary>

<a id="software"></a>
### Software
- ✅ Windows 10 ou Windows 11
- ✅ Acesso de administrador para instalação dos programas
- ✅ Conta no GitHub
- ✅ VS Code
- ✅ Git for Windows
- ✅ Python
- ✅ PlatformIO IDE
- ✅ com0com
- ✅ SimulIDE (opcional para testes)
- ✅ Extensões: PlatformIO IDE, GitHub Pull Requests and Issues e GitLens
- ✅ Drivers USB para ESP32

<a id="hardware"></a>
### Hardware
- ✅ ESP32
- ✅ Cabo USB para gravação e alimentação
- ✅ Computador com acesso à internet
- ✅ Porta USB disponível para comunicação e upload

</details>

---
<a id="baixando"></a>
<details close>
  <summary><strong> ⬇️ Baixando o pacote ININDUFU </strong></summary>

<a id="baixando-passo-1"></a>
### 🔹 Passo 1 – Acessar o link do instalador da disciplina
![fig1](assets/0.baixando/fig01.png)

1. Acesse o ambiente da disciplina onde estão os materiais disponibilizados pelo professor.
2. Localize a seção de **Links importantes**.
3. Clique no link referente ao **instalador com as ferramentas para a disciplina**.

💡 *Esse link é o ponto de partida para baixar o pacote que será usado nas etapas seguintes.*

---

<a id="baixando-passo-2"></a>
### 🔹 Passo 2 – Iniciar o download do arquivo no navegador
![fig2](assets/0.baixando/fig02.png)

1. Após abrir a página do arquivo, confira se o nome do instalador está correto.
2. Clique no botão **Download** exibido pelo navegador.
3. Aguarde o navegador preparar a transferência do arquivo.

---

<a id="baixando-passo-3"></a>
### 🔹 Passo 3 – Escolher salvar o instalador
![fig3](assets/0.baixando/fig03.png)

1. Quando o navegador perguntar o que fazer com o arquivo, observe as opções disponíveis.
2. Clique em **Salvar como** para escolher explicitamente onde o instalador será gravado.
3. Prossiga para a janela de seleção de pasta.

⚠️ *Salvar o arquivo em uma pasta conhecida facilita bastante localizar o instalador na etapa seguinte.*

---

<a id="baixando-passo-4"></a>
### 🔹 Passo 4 – Definir o local onde o arquivo será salvo
![fig4](assets/0.baixando/fig04.png)

1. Na janela **Salvar como**, escolha a pasta desejada, como a **Área de Trabalho**.
2. Confira o nome do arquivo antes de concluir o download.
3. Clique em **Salvar** para iniciar a gravação do instalador.

✅ *Ao final desta etapa, o arquivo começa a ser salvo no computador.*

---

<a id="baixando-passo-5"></a>
### 🔹 Passo 5 – Abrir a lista de downloads do navegador
![fig5](assets/0.baixando/fig05.png)

1. Após o download, clique no ícone de **Downloads** do navegador.
2. Verifique se o arquivo **inindUFUInstal.exe** aparece na lista.
3. Observe o aviso exibido pelo navegador sobre a necessidade de confirmar a origem do arquivo.

💡 *Esse tipo de aviso é comum quando o arquivo não é baixado com frequência ou ainda não possui reputação suficiente no navegador.*

---

<a id="baixando-passo-6"></a>
### 🔹 Passo 6 – Selecionar a opção para manter o arquivo
![fig6](assets/0.baixando/fig06.png)

1. Clique no menu de opções do item baixado.
2. Escolha a opção **Manter** para informar ao navegador que você deseja preservar o arquivo.
3. Aguarde a exibição da confirmação adicional de segurança.

---

<a id="baixando-passo-7"></a>
### 🔹 Passo 7 – Confirmar que deseja manter o instalador
![fig7](assets/0.baixando/fig07.png)

1. Na janela de confirmação, leia a mensagem apresentada pelo navegador.
2. Verifique se o nome do arquivo corresponde ao instalador da disciplina.
3. Clique em **Manter mesmo assim** para concluir o download.

⚠️ *Só mantenha o arquivo se você tiver certeza de que ele foi obtido a partir da fonte correta da disciplina.*

✅ *Com isso, o instalador ficará disponível no computador e pronto para ser executado na próxima seção.*

</details>

---
<a id="computador"></a>
<details close>
  <summary><strong> 🖥️ Instalando o pacote ININDUFU </strong></summary>

<a id="computador-passo-1"></a>
### 🔹 Passo 1 – Localizar o instalador do pacote ININDUFU
![fig1](assets/1.computador/fig01.png)

1. Acesse a pasta onde o instalador foi salvo, como a pasta **Downloads**.
2. Localize o arquivo do pacote **ININDUFU** mostrado na imagem.
3. Dê **duplo clique** para iniciar a preparação do ambiente.

💡 *Esse pacote normalmente reúne os instaladores principais usados na aula prática.*

---

<a id="computador-passo-2"></a>
### 🔹 Passo 2 – Abrir os detalhes do alerta do Windows
![fig2](assets/1.computador/fig02.png)

1. Caso o Windows exiba a mensagem **O Windows protegeu o computador**, não feche a janela.
2. Clique em **Mais informações** para liberar as opções do instalador.
3. Confira se o arquivo executado é realmente o utilizado na disciplina.

⚠️ *Só prossiga se o instalador tiver sido obtido a partir da aula, da turma ou de uma fonte confiável.*

---

<a id="computador-passo-3"></a>
### 🔹 Passo 3 – Executar o instalador mesmo assim
![fig3](assets/1.computador/fig03.png)

1. Após abrir os detalhes, clique em **Executar assim mesmo**.
2. Aguarde o carregamento do assistente de instalação.
3. Evite abrir outros programas durante essa etapa inicial.

---

<a id="computador-passo-4"></a>
### 🔹 Passo 4 – Iniciar o assistente de instalação
![fig4](assets/1.computador/fig04.png)

1. Na tela de boas-vindas do instalador, leia a mensagem inicial.
2. Confirme que o computador está pronto para continuar a instalação.
3. Clique em **Next >** para avançar.

💡 *Essa etapa apenas inicia o processo e confirma que o pacote será preparado no computador.*

---

<a id="computador-passo-5"></a>
### 🔹 Passo 5 – Conferir os componentes incluídos no pacote
![fig5](assets/1.computador/fig05.png)

1. Observe a lista de programas que fazem parte do pacote.
2. Verifique se aparecem itens como **VS Code**, **Python**, **Git**, **com0com** e **SimulIDE**.
3. Clique em **Next >** para seguir.

💡 *Essa tela ajuda a confirmar que o pacote contém os recursos esperados para a prática.*

---

<a id="computador-passo-6"></a>
### 🔹 Passo 6 – Definir a pasta de instalação
![fig6](assets/1.computador/fig06.png)

1. Verifique o diretório onde o pacote será instalado.
2. Caso necessário, utilize o botão de navegação para alterar o caminho.
3. Clique em **Next >** para continuar.

⚠️ *Prefira manter um caminho simples para evitar problemas com permissões e localização dos arquivos.*

---

<a id="computador-passo-7"></a>
### 🔹 Passo 7 – Confirmar o início da instalação
![fig7](assets/1.computador/fig07.png)

1. Revise as informações finais apresentadas pelo assistente.
2. Clique em **Start** para iniciar a instalação do pacote.
3. Aguarde a cópia dos arquivos.

---

<a id="computador-passo-8"></a>
### 🔹 Passo 8 – Concluir a instalação do pacote
![fig8](assets/1.computador/fig08.png)

1. Verifique a mensagem indicando que a instalação foi concluída com sucesso.
2. Clique em **Next >** para ir para a tela final.
3. Confirme que não houve mensagens de falha no processo.

✅ *O pacote base do ambiente foi instalado corretamente no computador.*

---

<a id="computador-passo-9"></a>
### 🔹 Passo 9 – Encerrar a tela final do instalador
![fig9](assets/1.computador/fig09.png)

1. Leia a mensagem final apresentada pelo criador do instalador.
2. Clique em **Exit** para fechar a janela.
3. Retorne para a área de trabalho e prossiga com as instalações específicas.

</details>

---
<a id="python"></a>
<details close>
  <summary><strong> 🐍 Instalando o python </strong></summary>

<a id="python-passo-1"></a>
### 🔹 Passo 1 – Selecionar a instalação personalizada e habilitar o PATH
![fig1](assets/2.python/fig01.png)

1. Marque a opção **Add python.exe to PATH** antes de continuar.
2. Clique em **Customize installation** para abrir as opções de instalação.
3. Prossiga para a próxima tela do assistente.

⚠️ *Se o Python não for adicionado ao PATH, o comando `python` pode não funcionar no terminal.*

---

<a id="python-passo-2"></a>
### 🔹 Passo 2 – Confirmar os recursos opcionais
![fig2](assets/2.python/fig02.png)

1. Verifique os recursos opcionais apresentados, como **pip** e **py launcher**.
2. Mantenha as opções recomendadas da instalação marcadas.
3. Clique em **Next** para avançar.

💡 *O `pip` é importante para instalação de bibliotecas Python ao longo da disciplina.*

---

<a id="python-passo-3"></a>
### 🔹 Passo 3 – Ajustar as opções avançadas
![fig3](assets/2.python/fig03.png)

1. Confira as opções avançadas, especialmente as relacionadas a associação de arquivos e variáveis de ambiente.
2. Verifique o diretório de instalação que será utilizado.
3. Clique em **Install** para iniciar a instalação do Python.

---

<a id="python-passo-4"></a>
### 🔹 Passo 4 – Aguardar a instalação do interpretador
![fig4](assets/2.python/fig04.png)

1. Aguarde o avanço da barra de progresso da instalação.
2. Não feche a janela enquanto o processo estiver em execução.
3. Espere até aparecer a tela de conclusão.

---

<a id="python-passo-5"></a>
### 🔹 Passo 5 – Finalizar o assistente do Python
![fig5](assets/2.python/fig05.png)

1. Ao visualizar a mensagem **Setup was successful**, confirme que a instalação terminou corretamente.
2. Se desejar, avalie a opção **Disable path length limit**.
3. Clique em **Close** para encerrar o assistente.

✅ *O Python foi instalado com sucesso no sistema.*

---

<a id="python-passo-6"></a>
### 🔹 Passo 6 – Validar a instalação no Prompt de Comando
![fig6](assets/2.python/fig06.png)

1. Abra o **Prompt de Comando** do Windows.
2. Execute o comando `python --version`.
3. Confirme se a versão instalada aparece corretamente na tela.

✅ *Se a versão for exibida, o Python está acessível pelo terminal.*

---

### 🔹 Material complementar – Instalação correta do Python

Veja o vídeo abaixo de como proceder com a instalação correta do Python:

[![Assista ao Vídeo](https://img.youtube.com/vi/CF1MhdQCnfc/hqdefault.jpg)](https://www.youtube.com/watch?v=CF1MhdQCnfc)

</details>

---
<a id="git"></a>
<details close>
  <summary><strong> 🌿 Instalando o git </strong></summary>

<a id="git-passo-1"></a>
### 🔹 Passo 1 – Avançar pela tela inicial do instalador
![fig1](assets/3.git/fig01.png)

1. Abra o instalador do **Git for Windows**.
2. Leia a tela inicial com as informações e termos apresentados.
3. Clique em **Next** para continuar.

---

<a id="git-passo-2"></a>
### 🔹 Passo 2 – Definir a pasta de instalação do Git
![fig2](assets/3.git/fig02.png)

1. Verifique o diretório sugerido pelo instalador.
2. Mantenha o caminho padrão, salvo se houver orientação diferente.
3. Clique em **Next** para avançar.

---

<a id="git-passo-3"></a>
### 🔹 Passo 3 – Conferir os componentes adicionais
![fig3](assets/3.git/fig03.png)

1. Observe a lista de componentes e integrações disponíveis.
2. Mantenha as opções padrão exibidas na imagem.
3. Clique em **Next** para prosseguir.

💡 *Na maioria dos casos, a instalação padrão já atende plenamente às atividades da disciplina.*

---

<a id="git-passo-4"></a>
### 🔹 Passo 4 – Escolher a pasta do menu Iniciar
![fig4](assets/3.git/fig04.png)

1. Verifique o nome da pasta que será criada no menu Iniciar.
2. Mantenha a sugestão padrão do instalador.
3. Clique em **Next** para seguir.

---

<a id="git-passo-5"></a>
### 🔹 Passo 5 – Manter o editor padrão do Git
![fig5](assets/3.git/fig05.png)

1. Observe o editor padrão selecionado pelo instalador.
2. Mantenha a opção exibida na imagem para preservar o padrão da instalação.
3. Clique em **Next** para continuar.

⚠️ *Caso altere esse item, o comportamento da edição de mensagens de commit pode mudar.*

---

<a id="git-passo-6"></a>
### 🔹 Passo 6 – Definir o nome da branch inicial
![fig6](assets/3.git/fig06.png)

1. Na configuração da branch inicial, marque a opção de nome personalizado.
2. Preencha com **main**, conforme mostrado na imagem.
3. Clique em **Next** para avançar.

💡 *Esse padrão ajuda a manter a nomenclatura alinhada com o que é usado na maioria dos repositórios atuais.*

---

<a id="git-passo-7"></a>
### 🔹 Passo 7 – Ajustar o ambiente PATH
![fig7](assets/3.git/fig07.png)

1. Na configuração do PATH, selecione a opção intermediária recomendada.
2. Essa opção permite usar o Git no terminal do Windows e também em outras ferramentas.
3. Clique em **Next** para continuar.

⚠️ *Uma opção incorreta aqui pode limitar o uso do Git fora do Git Bash.*

---

<a id="git-passo-8"></a>
### 🔹 Passo 8 – Escolher o executável SSH
![fig8](assets/3.git/fig08.png)

1. Mantenha a opção **Use bundled OpenSSH**.
2. Essa configuração costuma funcionar bem para a maioria dos usuários.
3. Clique em **Next** para prosseguir.

---

<a id="git-passo-9"></a>
### 🔹 Passo 9 – Selecionar o backend HTTPS
![fig9](assets/3.git/fig09.png)

1. Verifique a opção de biblioteca SSL apresentada pelo instalador.
2. Mantenha a escolha padrão mostrada na imagem.
3. Clique em **Next** para avançar.

---

<a id="git-passo-10"></a>
### 🔹 Passo 10 – Configurar a conversão de fim de linha
![fig10](assets/3.git/fig10.png)

1. Na tela de **line endings**, mantenha a opção recomendada pelo instalador.
2. Essa configuração facilita o trabalho entre Windows e ambientes baseados em Unix.
3. Clique em **Next** para continuar.

💡 *Essa etapa evita diferenças desnecessárias em arquivos de texto versionados.*

---

<a id="git-passo-11"></a>
### 🔹 Passo 11 – Escolher o terminal do Git Bash
![fig11](assets/3.git/fig11.png)

1. Verifique o emulador de terminal selecionado para o Git Bash.
2. Mantenha a opção padrão indicada na imagem.
3. Clique em **Next** para seguir.

---

<a id="git-passo-12"></a>
### 🔹 Passo 12 – Definir o comportamento do git pull
![fig12](assets/3.git/fig12.png)

1. Na configuração do `git pull`, observe a opção recomendada pelo instalador.
2. Mantenha a escolha padrão para evitar conflitos na rotina inicial.
3. Clique em **Next** para prosseguir.

---

<a id="git-passo-13"></a>
### 🔹 Passo 13 – Habilitar o gerenciador de credenciais
![fig13](assets/3.git/fig13.png)

1. Na tela de credenciais, mantenha o **Git Credential Manager** habilitado.
2. Essa opção ajuda no armazenamento e na autenticação com serviços remotos.
3. Clique em **Next** para avançar.

💡 *Essa configuração facilita o uso do Git com GitHub e outros provedores remotos.*

---

<a id="git-passo-14"></a>
### 🔹 Passo 14 – Conferir as opções extras
![fig14](assets/3.git/fig14.png)

1. Revise as opções extras disponíveis, como cache de sistema de arquivos.
2. Mantenha as seleções recomendadas mostradas na imagem.
3. Clique em **Next** para continuar.

---

<a id="git-passo-15"></a>
### 🔹 Passo 15 – Revisar as opções experimentais
![fig15](assets/3.git/fig15.png)

1. Observe as opções experimentais exibidas pelo instalador.
2. Mantenha apenas o que estiver indicado no padrão da imagem.
3. Clique em **Install** para iniciar a instalação final do Git.

⚠️ *Evite habilitar opções extras sem necessidade, principalmente se ainda estiver montando o ambiente pela primeira vez.*

---

<a id="git-passo-16"></a>
### 🔹 Passo 16 – Finalizar a instalação do Git
![fig16](assets/3.git/fig16.png)

1. Aguarde até a tela de conclusão do assistente ser exibida.
2. Revise as opções finais apresentadas.
3. Clique em **Finish** para encerrar.

✅ *O Git foi instalado e está pronto para ser usado no VS Code e no terminal.*

</details>

---
<a id="com0com"></a>
<details close>
  <summary><strong> 🔌 Instalando o com0com </strong></summary>

<a id="com0com-passo-1"></a>
### 🔹 Passo 1 – Iniciar o assistente do com0com
![fig1](assets/4.com0com/fig01.png)

1. Abra o instalador do **com0com**.
2. Leia a tela inicial do assistente.
3. Clique em **Next >** para continuar.

💡 *O com0com é útil para criar portas seriais virtuais, muito usado em testes e integrações.*

---

<a id="com0com-passo-2"></a>
### 🔹 Passo 2 – Aceitar o contrato de licença
![fig2](assets/4.com0com/fig02.png)

1. Leia o contrato de licença exibido pelo instalador.
2. Clique em **I Agree** para aceitar os termos.
3. Prossiga para a próxima etapa.

---

<a id="com0com-passo-3"></a>
### 🔹 Passo 3 – Confirmar os componentes da instalação
![fig3](assets/4.com0com/fig03.png)

1. Observe os componentes que serão instalados.
2. Mantenha os itens selecionados conforme mostrado na imagem.
3. Clique em **Next >** para seguir.

---

<a id="com0com-passo-4"></a>
### 🔹 Passo 4 – Definir a pasta de destino
![fig4](assets/4.com0com/fig04.png)

1. Verifique o diretório de instalação do com0com.
2. Se não houver necessidade de alteração, mantenha a pasta padrão.
3. Clique em **Install** para iniciar a cópia dos arquivos.

---

<a id="com0com-passo-5"></a>
### 🔹 Passo 5 – Autorizar a instalação do driver
![fig5](assets/4.com0com/fig05.png)

1. Se o Windows solicitar autorização para instalar o driver, confirme a origem do software.
2. Clique em **Instalar** para permitir a instalação do driver.
3. Aguarde o sistema concluir a etapa de segurança.

⚠️ *Sem essa confirmação, o com0com pode não funcionar corretamente no computador.*

---

<a id="com0com-passo-6"></a>
### 🔹 Passo 6 – Aguardar a cópia dos arquivos
![fig6](assets/4.com0com/fig06.png)

1. Acompanhe a tela de progresso do instalador.
2. Aguarde até a mensagem de instalação concluída aparecer.
3. Clique em **Next >** para ir à tela final.

---

<a id="com0com-passo-7"></a>
### 🔹 Passo 7 – Encerrar o assistente do com0com
![fig7](assets/4.com0com/fig07.png)

1. Na tela final, confirme que a instalação foi concluída.
2. Desmarque opções extras caso não queira abri-las imediatamente.
3. Clique em **Finish** para encerrar.

✅ *O com0com foi instalado com sucesso no sistema.*

</details>

---
<a id="vscode"></a>
<details close>
  <summary><strong> 💻 Instalando o vscode </strong></summary>

<a id="vscode-passo-1"></a>
### 🔹 Passo 1 – Escolher o modo de instalação do VS Code
![fig1](assets/5.vscode/fig01.png)

1. Ao abrir o instalador pelo prompt, observe a pergunta sobre o tipo de instalação.
2. Digite **U** para selecionar o modo **User**.
3. Pressione **Enter** para continuar.

💡 *Esse é o padrão mais comum para instalação individual no computador do aluno.*

---

<a id="vscode-passo-2"></a>
### 🔹 Passo 2 – Confirmar o aviso do instalador
![fig2](assets/5.vscode/fig02.png)

1. Caso apareça o aviso sobre instalação em modo de usuário, leia a mensagem exibida.
2. Clique em **OK** para prosseguir.
3. Aguarde o carregamento do assistente do VS Code.

---

<a id="vscode-passo-3"></a>
### 🔹 Passo 3 – Aceitar o contrato de licença
![fig3](assets/5.vscode/fig03.png)

1. Leia o contrato de licença apresentado pelo instalador.
2. Marque a opção de aceite dos termos.
3. Clique em **Próximo >** para avançar.

---

<a id="vscode-passo-4"></a>
### 🔹 Passo 4 – Selecionar as tarefas adicionais
![fig4](assets/5.vscode/fig04.png)

1. Revise as tarefas adicionais, como criação de ícone, integração ao menu de contexto e registro no PATH.
2. Mantenha as opções recomendadas da imagem.
3. Clique em **Próximo >** para seguir.

⚠️ *Adicionar o VS Code ao PATH facilita bastante o uso de comandos como `code .` no terminal.*

---

<a id="vscode-passo-5"></a>
### 🔹 Passo 5 – Iniciar a instalação do VS Code
![fig5](assets/5.vscode/fig05.png)

1. Revise o resumo das escolhas feitas no assistente.
2. Clique em **Instalar** para iniciar o processo.
3. Aguarde a conclusão da cópia dos arquivos.

---

<a id="vscode-passo-6"></a>
### 🔹 Passo 6 – Concluir a instalação do editor
![fig6](assets/5.vscode/fig06.png)

1. Ao final da instalação, confira a mensagem de conclusão do assistente.
2. Se desejar, mantenha a opção para iniciar o VS Code marcada.
3. Clique em **Concluir** para encerrar.

✅ *O Visual Studio Code foi instalado com sucesso.*

---

<a id="vscode-passo-7"></a>
### 🔹 Passo 7 – Fechar o prompt do instalador
![fig7](assets/5.vscode/fig07.png)

1. Volte ao prompt exibido durante a instalação.
2. Confirme que o processo foi finalizado.
3. Pressione qualquer tecla, caso solicitado, para fechar a janela.

---

### 🔹 Material complementar – Instalação do VS Code

Baixe e instale o VS Code conforme o vídeo abaixo:

[![Assista ao Vídeo](https://img.youtube.com/vi/FOqKMPX6BMo/hqdefault.jpg)](https://www.youtube.com/watch?v=FOqKMPX6BMo)

---

### 🔹 Complemento – Extensões recomendadas para a disciplina

1. Instale as extensões **PlatformIO IDE**, **GitHub Pull Requests and Issues** e **GitLens**.
2. Utilize essas extensões para facilitar a criação de projetos, a integração com o GitHub e a análise do histórico do código.
3. Reinicie o VS Code, caso alguma extensão solicite essa ação para concluir a configuração.

</details>

---
<a id="extensions"></a>
<details close>
  <summary><strong> 🛠️ Instalando extensões no VScode </strong></summary>

<a id="extensions-passo-1"></a>
### 🔹 Passo 1 – Instalar o Git & GitHub Extension Pack
![fig1](assets/6.1.extensions/fig01.png)

1. Clique no ícone de **Extensões** na barra lateral do VS Code.
2. Digite **GitHub pack** no campo de busca.
3. Clique sobre a extensão **Git & GitHub Extension Pack** na lista de resultados.
4. Clique em **Instalar** para adicionar o pacote ao editor.

💡 *Esse pacote reúne extensões essenciais para trabalhar com Git e GitHub diretamente no VS Code.*

---

<a id="extensions-passo-2"></a>
### 🔹 Passo 2 – Instalar a extensão LasecGitSession
![fig2](assets/6.1.extensions/fig02.png)

1. Clique no ícone de **Extensões** na barra lateral.
2. Digite **lasec** no campo de busca.
3. Clique sobre a extensão **LasecGitSession** na lista de resultados.
4. Clique em **Instalar** para adicioná-la ao VS Code.

💡 *Essa extensão prepara e encerra a sessão do aluno no Git em ambientes compartilhados, usando configuração global do Git.*

---

<a id="extensions-passo-3"></a>
### 🔹 Passo 3 – Instalar a extensão lasecplot
![fig3](assets/6.1.extensions/fig03.png)

1. Clique no ícone de **Extensões** na barra lateral.
2. Digite **lasec** no campo de busca.
3. Clique sobre a extensão **lasecplot** na lista de resultados.
4. Clique em **Instalar** para adicioná-la ao VS Code.

💡 *O lasecplot é um visualizador de telemetria (fork do Teleplot) usado para monitorar dados durante os experimentos.*

---

<a id="extensions-passo-4"></a>
### 🔹 Passo 4 – Instalar o Python Extension Pack
![fig4](assets/6.1.extensions/fig04.png)

1. Clique no ícone de **Extensões** na barra lateral.
2. Digite **python pack** no campo de busca.
3. Clique sobre a extensão **Python Extension Pack** na lista de resultados.
4. Clique em **Instalar** para adicionar o pacote ao editor.

💡 *Esse pacote inclui extensões populares para desenvolvimento em Python, como linting, formatação e depuração.*

---

<a id="extensions-passo-5"></a>
### 🔹 Passo 5 – Instalar o PlatformIO IDE
![fig5](assets/6.1.extensions/fig05.png)

1. Clique no ícone de **Extensões** na barra lateral.
2. Digite **platformio** no campo de busca.
3. Clique sobre a extensão **PlatformIO IDE** na lista de resultados.
4. Clique em **Instalar** para adicionar a extensão ao VS Code.

⚠️ *O PlatformIO é fundamental para compilar, enviar e depurar projetos com ESP32 dentro do VS Code.*

---

<a id="extensions-passo-6"></a>
### 🔹 Passo 6 – Instalar a extensão Open in External App
![fig6](assets/6.1.extensions/fig06.png)

1. Clique no ícone de **Extensões** na barra lateral.
2. Digite **open-in** no campo de busca.
3. Clique sobre a extensão **Open in External App** na lista de resultados.
4. Clique em **Instalar** para adicioná-la ao VS Code.

💡 *Essa extensão permite abrir arquivos com aplicativos externos diretamente a partir do editor.*

---

<a id="extensions-passo-7"></a>
### 🔹 Passo 7 – Instalar a extensão Batch Runner
![fig7](assets/6.1.extensions/fig07.png)

1. Clique no ícone de **Extensões** na barra lateral.
2. Digite **batch-** no campo de busca.
3. Clique sobre a extensão **Batch Runner** na lista de resultados.
4. Clique em **Instalar** para adicioná-la ao VS Code.

💡 *O Batch Runner permite executar arquivos `.bat` e `.cmd` rapidamente no terminal do VS Code.*

✅ *Todas as extensões necessárias para a disciplina foram instaladas com sucesso.*

</details>

---

<a id="fork"></a>
<details close>
  <summary><strong> Fazendo um fork no github </strong></summary>

</details>

---

<a id="new-platformio"></a>
<details close>
  <summary><strong> 🆕 Criando um novo projeto no PlatformIO </strong></summary>

<a id="new-platformio-passo-1"></a>
### 🔹 Passo 1 – Abrir a PIO Home e iniciar um novo projeto
![fig4](assets/6.platformio/fig04.png)

1. Clique no ícone do **PlatformIO** na barra lateral.
2. Abra a **PIO Home**.
3. Clique em **Create New Project** ou **New Project** para começar.

---

<a id="new-platformio-passo-2"></a>
### 🔹 Passo 2 – Preencher o assistente de criação do projeto
![fig5](assets/6.platformio/fig05.png)

1. Defina o nome do projeto.
2. Selecione a placa **ESP32** correspondente ao kit utilizado na prática.
3. Escolha o framework **Arduino** e clique em **Finish**.

⚠️ *Confira a placa com atenção. A imagem mostra um exemplo, mas o seu projeto deve usar o modelo correto da ESP32.*

---

<a id="new-platformio-passo-3"></a>
### 🔹 Passo 3 – Aguardar a geração da estrutura PlatformIO
![fig6](assets/6.platformio/fig06.png)

1. Aguarde o PlatformIO criar as pastas do projeto.
2. Não feche o VS Code durante esse processo.
3. Espere até a estrutura básica ficar disponível no explorador de arquivos.

---

<a id="new-platformio-passo-4"></a>
### 🔹 Passo 4 – Conferir os arquivos do projeto criado
![fig7](assets/6.platformio/fig07.png)

1. Verifique se foram criadas pastas como `src`, `include`, `lib` e o arquivo `platformio.ini`.
2. Abra o arquivo **platformio.ini** para conferir a configuração inicial da placa e do framework.
3. Confirme que o projeto está pronto para edição, compilação e upload.

✅ *O ambiente PlatformIO está configurado para iniciar o desenvolvimento com ESP32.*

---

### 🔹 Complemento – Criação e teste inicial do projeto

1. Crie um projeto no PlatformIO configurado para usar **ESP32 Dev Module** com o framework **Arduino**.
2. Substitua o código no arquivo `src/main.cpp` pelo exemplo fornecido na aula.
3. Faça o upload para a ESP32 e acompanhe o terminal para validar a compilação e a gravação.

Veja o vídeo abaixo sobre a criação e o teste inicial do projeto:

[![Assista ao Vídeo](https://img.youtube.com/vi/HSSXU4XHBYY/hqdefault.jpg)](https://www.youtube.com/watch?v=HSSXU4XHBYY)

💡 *Após instalar a extensão PlatformIO IDE, reinicie o VS Code para concluir a configuração do ambiente, se necessário.*

</details>

---
<a id="github"></a>
<details close>
  <summary><strong> ☁️ Fazendo uma publicação do VSCode no github </strong></summary>

<a id="github-passo-1"></a>
### 🔹 Passo 1 – Iniciar a publicação do projeto no GitHub
![fig1](assets/7.github/fig01.png)

1. Abra o projeto no **VS Code**.
2. Vá até a aba **Source Control** na barra lateral esquerda.
3. Clique em **Publish to GitHub** para iniciar a publicação do repositório.

💡 *Esse recurso cria o repositório remoto diretamente a partir do VS Code.*

---

<a id="github-passo-2"></a>
### 🔹 Passo 2 – Autorizar o acesso à conta GitHub
![fig2](assets/7.github/fig02.png)

1. Quando o VS Code solicitar autenticação, escolha a opção de login no GitHub.
2. Autorize a extensão a acessar sua conta.
3. Aguarde o retorno ao editor após a autenticação.

⚠️ *Sem essa autorização, o VS Code não conseguirá publicar nem sincronizar o repositório.*

---

<a id="github-passo-3"></a>
### 🔹 Passo 3 – Definir o nome e a visibilidade do repositório
![fig3](assets/7.github/fig03.png)

1. Escolha o nome do repositório que será criado.
2. Defina se o repositório será **Public** ou **Private**.
3. Confirme a publicação para o GitHub.

---

<a id="github-passo-4"></a>
### 🔹 Passo 4 – Conferir os arquivos preparados para versionamento
![fig4](assets/7.github/fig04.png)

1. Observe a lista de arquivos exibida na área de controle de código.
2. Verifique se os arquivos principais do projeto aparecem corretamente.
3. Confirme que o VS Code está pronto para registrar o primeiro commit.

---

<a id="github-passo-5"></a>
### 🔹 Passo 5 – Criar o primeiro commit e configurar a identidade Git
![fig5](assets/7.github/fig05.png)

1. Se necessário, abra o terminal integrado do VS Code.
2. Configure sua identidade:

```bash
git config --global user.name "Seu Nome"
git config --global user.email "seu@email.com"
```
3. Escreva a mensagem do commit inicial e clique em **Commit**.

⚠️ *Sem `user.name` e `user.email`, o Git pode bloquear a criação do commit.*

4. Para limpar suas credenciais do GitHub, utilize:

```bash
git config --global --unset user.name
git config --global --unset user.email
``` 
---

<a id="github-passo-6"></a>
### 🔹 Passo 6 – Validar a publicação no GitHub
![fig6](assets/7.github/fig06.png)

1. Abra o GitHub no navegador após a publicação.
2. Verifique se o repositório aparece corretamente na sua conta.
3. Confirme que o nome e a visibilidade estão de acordo com o que foi escolhido.

✅ *O projeto está publicado e pronto para sincronização com GitHub.*

---

### 🔹 Complemento – Configurar GitHub no VS Code

1. Faça login no GitHub utilizando a extensão **GitHub Pull Requests and Issues**.
2. Autorize o VS Code a acessar a sua conta para sincronizar commits, pull requests e publicações.
3. Confirme que a conta está conectada antes de iniciar a publicação do repositório.

---

### 🔹 Complemento – Integração com GitHub

Utilize o Git integrado ao VS Code para:
- Criar um repositório no GitHub.
- Fazer commits e sincronizar o código.
- Criar branches e pull requests.

O vídeo abaixo apresenta como fazer tudo isso:

[![Assista ao Vídeo](https://img.youtube.com/vi/B_RTIOYZmvw/hqdefault.jpg)](https://www.youtube.com/watch?v=B_RTIOYZmvw)

---

### 🔹 Complemento – Atualizações e colaboração

1. Utilize pull requests para revisar e integrar código quando estiver trabalhando em equipe.
2. Adicione um arquivo `.gitignore` adequado ao projeto para evitar o versionamento de arquivos temporários.
3. Inclua diretórios como `.vscode/` e `.pio/` quando não quiser publicar artefatos gerados localmente.

---

### 🔹 Material complementar – Processos interativos entre GitHub e VS Code

Veja o vídeo abaixo para que os processos interativos entre GitHub e VS Code funcionem adequadamente:

[![Assista ao Vídeo](https://img.youtube.com/vi/6QpcVrRDbp4/hqdefault.jpg)](https://www.youtube.com/watch?v=6QpcVrRDbp4)

</details>

---
<a id="boas-praticas-para-mensagens-de-commit"></a>
<details close>
  <summary><strong> 📝 Boas práticas para mensagens de commit </strong></summary>

Para garantir que seu projeto seja bem documentado e fácil de manter, siga estas práticas:

📌 **Não pense que seu código é autoexplicativo:** Se esforce para escrever uma mensagem que retrate de forma concisa exatamente o que aquela alteração significa.

📌 **Especifique o tipo de commit:** Utilize prefixos no assunto referente ao tipo de cada commit.

Ex:

```text
feat: uma nova feature (recurso) que você está adicionando a uma aplicação específica
fix: a resolução de um bug
style: recurso e atualizações relacionadas à estilização
refactor: refatoração de uma seção específica da base de código
test: tudo o que for relacionado a testes
docs: tudo o que for relacionado à documentação
chore: manutenção regular do código
```

📌 **Use um verbo no infinitivo:** A mensagem do campo “Assunto” (primeira linha) deve iniciar com um verbo no infinitivo que descreva a ação realizada, seguido por uma descrição concisa da mudança. Exemplo: `Adicionar validação de formulário para garantir que todos os campos obrigatórios sejam preenchidos`.

📌 **Mantenha-a curta e concisa:** As mensagens de commit devem ser curtas e diretas, com no máximo 72 caracteres na primeira linha (assunto) e uma linha em branco após a primeira linha (descrição). Isso torna mais fácil para outros desenvolvedores entenderem rapidamente o que foi feito.

📌 **Forneça contexto:** A segunda linha da mensagem deve fornecer um contexto adicional sobre o que foi feito. Por exemplo, se você estiver corrigindo um bug, descreva o problema resolvido.

📌 **Mantenha-a clara e objetiva:** Mantenha a mensagem clara e objetiva, sem usar jargões ou frases excessivamente técnicas. Isso ajuda a garantir que a mensagem seja compreendida por todos os membros da equipe.

📌 **Use passos de ação se necessário:** Se o commit requer muitos passos, inclua-os na mensagem de commit, separando-os com uma lista numerada ou com marcadores. Isso ajuda a garantir que o processo seja claro e fácil de seguir.

Em geral, ao escrever uma mensagem de commit, pense na pessoa que estará lendo a mensagem muito tempo depois, quando as circunstâncias poderão ter mudado e a pessoa pode não ter conhecimento do contexto original. Dessa forma, mantenha a mensagem clara, objetiva e forneça o contexto necessário para ajudar outros desenvolvedores a entender rapidamente o que foi feito.

Mantenha essas práticas em mente ao trabalhar com o Git, e você verá que será mais fácil gerenciar e manter o código organizado e eficiente.

</details>

---
<a id="tratamento-e-analise"></a>
<details close>
  <summary><strong> 📊 Tratamento e análise </strong></summary>

- Teste o código no ESP32 e analise os logs no PlatformIO.
- Verifique se o repositório GitHub está atualizado.
- Utilize ferramentas do PlatformIO para depurar o código e validar a execução.

</details>

---
<a id="tarefa-a-ser-executada"></a>
<details close>
  <summary><strong> 🧪 Tarefa a ser executada </strong></summary>

- Faça um LED piscar.
- A comunicação serial não pode parar.
- Use o SimulIDE para testar seu código.
- Não use `delay()` no `loop`.

</details>

---
<a id="resultado-esperado"></a>
<details close>
  <summary><strong> ✅ Resultado esperado </strong></summary>

Ao final deste procedimento, espera-se que você tenha:
- ✅ Computador preparado com os programas básicos da aula
- ✅ Python, Git, com0com e VS Code instalados
- ✅ Conta GitHub integrada ao VS Code
- ✅ PlatformIO configurado para criar projetos com ESP32
- ✅ Ambiente pronto para desenvolver, versionar e testar aplicações da disciplina

</details>

---
<a id="observacoes-importantes"></a>
<details close>
  <summary><strong> ⚠️ Observações importantes </strong></summary>

- Sempre confira a origem do instalador antes de liberar avisos do Windows.
- No Git, mantenha `user.name` e `user.email` configurados para evitar erro no primeiro commit.
- No PlatformIO, confirme a placa da ESP32 antes de compilar ou gravar o firmware.
- Caso o projeto utilize upload por rede, revise o parâmetro `upload_protocol` no arquivo `platformio.ini`.
- Em atividades com serial e SimulIDE, o com0com pode ser necessário para interligar portas virtuais.
- Nos exemplos da disciplina, prefira temporização com `millis()` ou mecanismos não bloqueantes em vez de `delay()`.

</details>

---
<a id="referencias"></a>
<details close>
  <summary><strong> 📚 Referências </strong></summary>

- Documentação do PlatformIO: https://docs.platformio.org/
- Documentação do VS Code: https://code.visualstudio.com/docs
- Documentação do GitHub: https://docs.github.com/
- Git for Windows: https://gitforwindows.org/
- Python para Windows: https://www.python.org/downloads/windows/
- com0com: https://sourceforge.net/projects/com0com/

</details>


[def]: #new-platformio

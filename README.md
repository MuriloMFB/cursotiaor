<<<<<<< HEAD
# FIAP - Faculdade de Informática e Administração Paulista

<p align="center">
<a href= "https://www.fiap.com.br/"><img src="assets/logo-fiap.png" alt="FIAP - Faculdade de Informática e Admnistração Paulista" border="0" width=40% height=40%></a>
</p>

<br>

# Nome do projeto

## Nome do grupo

## 👨‍🎓 Integrantes: 
- <a href="https://www.linkedin.com/company/inova-fusca">Nome do integrante 1</a>
- <a href="https://www.linkedin.com/company/inova-fusca">Nome do integrante 2</a>
- <a href="https://www.linkedin.com/company/inova-fusca">Nome do integrante 3</a> 
- <a href="https://www.linkedin.com/company/inova-fusca">Nome do integrante 4</a> 
- <a href="https://www.linkedin.com/company/inova-fusca">Nome do integrante 5</a>

## 👩‍🏫 Professores:
### Tutor(a) 
- <a href="https://www.linkedin.com/company/inova-fusca">Nome do Tutor</a>
### Coordenador(a)
- <a href="https://www.linkedin.com/company/inova-fusca">Nome do Coordenador</a>


## 📜 Descrição

*Descreva seu projeto com base no texto do PBL (até 600 palavras)*


## 📁 Estrutura de pastas

Dentre os arquivos e pastas presentes na raiz do projeto, definem-se:

- <b>.github</b>: Nesta pasta ficarão os arquivos de configuração específicos do GitHub que ajudam a gerenciar e automatizar processos no repositório.

- <b>assets</b>: aqui estão os arquivos relacionados a elementos não-estruturados deste repositório, como imagens.

- <b>config</b>: Posicione aqui arquivos de configuração que são usados para definir parâmetros e ajustes do projeto.

- <b>document</b>: aqui estão todos os documentos do projeto que as atividades poderão pedir. Na subpasta "other", adicione documentos complementares e menos importantes.

- <b>scripts</b>: Posicione aqui scripts auxiliares para tarefas específicas do seu projeto. Exemplo: deploy, migrações de banco de dados, backups.

- <b>src</b>: Todo o código fonte criado para o desenvolvimento do projeto ao longo das 7 fases.

- <b>README.md</b>: arquivo que serve como guia e explicação geral sobre o projeto (o mesmo que você está lendo agora).

## 🔧 Como executar o código

*Acrescentar as informações necessárias sobre pré-requisitos (IDEs, serviços, bibliotecas etc.) e instalação básica do projeto, descrevendo eventuais versões utilizadas. Colocar um passo a passo de como o leitor pode baixar o seu código e executá-lo a partir de sua máquina ou seu repositório. Considere a explicação organizada em fase.*


## 🗃 Histórico de lançamentos

* 0.5.0 - XX/XX/2024
    * 
* 0.4.0 - XX/XX/2024
    * 
* 0.3.0 - XX/XX/2024
    * 
* 0.2.0 - XX/XX/2024
    * 
* 0.1.0 - XX/XX/2024
    *

## 📋 Licença

<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1"><p xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/"><a property="dct:title" rel="cc:attributionURL" href="https://github.com/agodoi/template">MODELO GIT FIAP</a> por <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://fiap.com.br">Fiap</a> está licenciado sobre <a href="http://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">Attribution 4.0 International</a>.</p>


=======
# Sistema de Irrigação Automática da Cultura de Milho

Projeto realizado para a Fase 2 CAP 1 - Um Mapa do Tesouro. Usando o simulador Browser Wokwi para utilizarmos o **ESP32** e conjuntos de componentes eletrônicos para simularmos um ambiente agrícola.

Monitorndo a umidade, pH e nutrientes (NPK) do solo, simulando uma irrigação automatizada com base nas condições ideais para o cultivo do **milho**

## Objetivo do Projeto.

Coletar os dados da cultura escolhida (Milho);
Dados como nivel de Nutrientes **NPK**;
Nível do **pH** do solo;
Nível de **humidade** do solo;
Realizar a irrigação automática baseado nos dados coletados;
Demonstrar ao Usuário a coleta e o resultado dessa coleta de **dados** através do Monitor Serial;

## Lógica de Funcionamento

O sistema toma decisões com base nas seguintes condições:

### A bomba é **ligada** quando:
- Todos os nutrientes estão adequados (botões pressionados);
- O pH está entre **5.5 e 7.0**, considerado ideal para o milho;
- A umidade está **abaixo de 50%**, indicando solo seco.

### A bomba é **desligada** quando:
- A umidade ultrapassa **70%** (solo úmido);
- O pH está fora da faixa ideal;
- Algum nutriente está em falta.

## Video demonstrativo
Assista ao video onde explicamos o projeto pelo link abaixo

[Link do Video](https://youtu.be/5PLMMO5RLZY)

## Imagens

### Conexão dos Botões
![circuito.png](fase2/imagens/Circuito.png)

![circuito02.png](fase2/imagens/Circuito02png.png)

![circuito01.png](fase2/imagens/Circuito01.png)

![circuito.png](fase2/imagens/Circuito03.png)

## LDR
![circuito04.png](fase2/imagens/Circuito04.png)

## DHT22
![circuito.png](fase2/imagens/Circuito05.png)

## Relé
![circuito.png](fase2/imagens/Circuito06.png)

## Circuito completo 
![circuito.png](fase2/imagens/Circuito07.png)
>>>>>>> 6ee62fc28bd56535a3f6452b6ba81e8cc381838d

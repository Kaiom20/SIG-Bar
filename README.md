<p align="center">
SIG-Bar - Um Sistema de Gestão Para Um Bar e Restaurante
</p>

<p align="center">
  <a href="#-motivacao">Motivação</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-compilacao">Compilação</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-tecnologia">Tecnologias</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-ferramenta">Ferramenta</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-desenvolvedores">Desenvolvedores</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-contato">Contato</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-sobre">Sobre</a>
</p>
<br>

## Motivação

O SIG-Bar é o programa ideal para gestores e proprietários de bares e restaurantes que buscam um controle eficiente de suas operações. Desenvolvido especificamente para o setor de alimentação, o SIG-Bar permite que você gerencie aspectos do seu negócio de maneira prática e organizada. Com as funcionalidades do SIG-Bar, você consegue otimizar processos e maximizar o atendimento ao cliente. SIG-Bar, a solução completa para a gestão do seu bar ou restaurante!

## Compilação

 ### Windows e Linux:

 - Para utlizar o programa, é necessário ter Git e um compilador para linguagem C, ambos instalados em sua máquina.

 - Feito isso, abra alguma pasta qualquer pelo terminal e clone o repositório digitando o seguinte comando:

```shell
https://github.com/Kaiom20/SIG-Bar.git
 ```
- Para compilar e rodar o programa, abra o terminal, vá até a pasta do programa e digite os seguintes comandos em sequência:

### No Windows:

> [!WARNING]
> Para sistema operacional Windows, não possui Makefile, então a compilação será feita de forma "manual" ou, você pode buscar meios alternativos, como exemplo o WSL que simula um terminal do Linux no seu sistema operacional Windows. Para você baixar o WSL recomendo que pesquise na internet ou então peça ajuda do ChatGPT.

```shell
gcc -c -Wall main.c comandas/comandas.c comandas/ler_comandas.c estoque/estoque.c estoque/moduloE.c garcom/garcom.c garcom/moduloG.c relatorio/relatorio.c validadores/valida.c garcom/ler_garcom.c estoque/ler_estoque.c interfacesPrincipais/interfaces.c
```

```shell
gcc -c -Wall comandas/comandas.h comandas/ler_comandas.h estoque/estoque.h estoque/moduloE.h garcom/garcom.h garcom/moduloG.h relatorio/relatorio.h validadores/valida.h garcom/ler_garcom.h estoque/ler_estoque.h interfacesPrincipais/interfaces.h
```

```shell
gcc -o SIG-Bar.exe main.o
```
### Para Executar

```shell
SIG-Bar.exe ou .\SIG-Bar
```

### No Linux:

> [!IMPORTANT]
>  No Linux poderá ser usado o Makefile. Vá no seu terminal e digite "Make" se você não tiver, o linux irá mostrar o comando para baixar via terminal. Caso queria saber se você já possui o make, digite em seu terminal o comando "make --version".

### Para Executar

```shell
Com o Make baixado, dentro do diretório do projeto, digite "make run", ele vai compilar todos os arquvos .c e .h, criando o executavel automaticamente e já rodando o programa.
```

```shell
Ao final, quando o programa for encerrado, digite o comando "make clean", isso limpara todos os arquivos criados pelo primeiro comando "make run".
```

##  Tecnologia

Esse projeto foi desenvolvido com a seguinte tecnologia:

- C

##  Ferramenta
Esse projeto foi desenvolvido com o seguinte editor de código:

- Visual Studio Code

##  Desenvolvedores 

| Titulo | Nome |
| ------ | ------ |
| Desenvolvedor | Kaio Marcio |
| Desenvolvedor | Fillipe Medeiros |
| Desenvolvedor | Diêgo Axel |

## Contate-nos

### Kaio Márcio ->

| GitHub | Linkedin | Instagram | Portifólio | E-mail | Celular |
| ------ | ------ | ------ | ------ | ------ | ------ |
| [Kaiom20](https://github.com/Kaiom20) | [Kaio Márcio Lira](https://www.linkedin.com/in/kaio-márcio-lira-24264b2b7/) | [Kaio Márcio](https://www.instagram.com/kaiom.20/) | Null | kaiomacl.20@gmail.com | (83) 98716-3046 |

### Fillipe Medeiros ->

| GitHub | Linkedin | Instagram | Portifólio | E-mail | Celular |
| ------ | ------ | ------ | ------ | ------ | ------ |
| [fillipemdrs](https://github.com/fillipemdrs) | [Fillipe Medeiros](https://www.linkedin.com/in/fillipe-medeiros-ara%C3%BAjo-morais-13bb68334/) | [Fillipe Medeiros](https://www.instagram.com/fillipemdrs/) | Null | fillipemdrs.63@gmail.com | (83) 98131-6252 |

### Diêgo Axel ->

| GitHub | Linkedin | Instagram | Portifólio | E-mail | Celular |
| ------ | ------ | ------ | ------ | ------ | ------ |
| [Diego-Axel](https://github.com/Diego-Axel) | [Diêgo Axel](https://www.linkedin.com/in/di%C3%AAgo-axel-1684452b5/) | [Axel](https://www.instagram.com/diegoaxelbsr/) | [Diêgo_Dev](https://diego-axel.github.io/) | diegoaxelbsr@gmail.com | (84) 99977-4459 |

##  Sobre

- Este é um Projeto do Curso de Sistemas de Informação da Universidade Federal do Rio Grande do Norte(UFRN).

- Projeto Avaliativo para o 2 Semestre de 2024 na matéria de programação.
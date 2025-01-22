// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

// Funções

char menu_principal(void) {
    char opc;
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Menu Principal          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|                  [1] Menu Comandas                   |=====|\n");
    printf("|=====|                  [2] Menu Estoque                    |=====|\n");
    printf("|=====|                  [3] Menu Garçom                     |=====|\n");
    printf("|=====|                  [4] Menu Relatórios                 |=====|\n");
    printf("|=====|                  [5] Informações                     |=====|\n");
    printf("|=====|                  [0] Sair                            |=====|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("|=====| Escolha uma opção: ");
    scanf("%c", &opc);
    getchar();
    return opc;
}


void info(void) {
    system("clear||cls");
    printf("\n");
    printf("|========================================================================================|\n");
    printf("|==================|                    Informações                   |==================|\n");
    printf("|========================================================================================|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|          Projeto de um Sistema de Gestão para um Bar e Restaurante         |=====|\n");
    printf("|=====|                        Sistemas de Informação / UFRN                       |=====|\n");
    printf("|=====|                           Disciplina: Programação                          |=====|\n");
    printf("|=====|                    Professor: Flavius da Luz e Gorgônio                    |=====|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|                    Projeto em desenvolvimento por:                         |=====|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|                    Kaio Márcio Araújo Cavalcante Lira                      |=====|\n");
    printf("|=====|                    E-mail: kaio.lira.080@ufrn.edu.br                       |=====|\n");
    printf("|=====|                    Instagram: @kaiom.20                                    |=====|\n");
    printf("|=====|                    Git: https://github.com/Kaiom20                         |=====|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|                    Fillipe Medeiros Araújo Morais                          |=====|\n");
    printf("|=====|                    E-mail: fillipe.morais.095@ufrn.edu.br                  |=====|\n");
    printf("|=====|                    Instagram: @fillipemdrs                                 |=====|\n");
    printf("|=====|                    Git: https://github.com/fillipemdrs                     |=====|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|                    Diêgo Axel Bernardo Santos Rodrigues                    |=====|\n");
    printf("|=====|                    E-mail: diegoaxelbsr@gmail.com                          |=====|\n");
    printf("|=====|                    Instagram: @diegoaxelbsr                                |=====|\n");
    printf("|=====|                    Git: https://github.com/Diego-Axel                      |=====|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|                    Luís Henrique de Almeida Marciano                       |=====|\n");
    printf("|=====|                    E-mail: luis27marciano@gmail.com                        |=====|\n");
    printf("|=====|                    Instagram: @luis_h_27                                   |=====|\n");
    printf("|=====|                    Git: https://github.com/Luis27h                         |=====|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|                                               -- desde Set, 2024           |=====|\n");
    printf("|========================================================================================|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|                            Sobre o Programa:                               |=====|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|   O SIG-Bar é o programa ideal para gestores e proprietários de bares e    |=====|\n");
    printf("|=====|   restaurantes que buscam um controle eficiente de suas operações. Desen-  |=====|\n");
    printf("|=====|   volvido especificamente para o setor de alimentação, o SIG-Bar permite   |=====|\n");
    printf("|=====|   que você gerencie aspectos do seu negócio de maneira prática e organiza- |=====|\n");
    printf("|=====|   da. Com as funcionalidades do SIG-Bar, você consegue otimizar processos  |=====|\n");
    printf("|=====|   e maximizar o atendimento ao cliente. SIG-Bar, a solução completa para a |=====|\n");
    printf("|=====|                      gestão do seu bar ou restaurante!                     |=====|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|========================================================================================|\n");
    printf("\n");
    printf("\t\t\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}
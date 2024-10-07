/*
|=============================================================|
|=================|     Projeto SIG-Bar     |=================|
|=============================================================|
|=====|   Sistema de Gestão para um Bar e Restaurante   |=====|
|=====|          Sistemas de Informação / UFRN          |=====|
|=====|                  Programação                    |=====|
|=====|      Alunos: Kaio Márcio e Fillipe Medeiros     |=====|
|=====|                   Versão 0.2                    |=====|
|=============================================================|
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "comandas.h"
#include "estoque.h"
#include "garcom.h"

// Assinatura das funções
char menu_principal(void);
char menu_relatorios(void);



void info(void);


// Programa Principal
int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    char opcao;
    opcao = menu_principal();
    opcao = menu_comandas();
    cadastrar_comanda();
    exibir_comanda();
    alterar_comanda();
    excluir_comanda();
    opcao = menu_estoque();
    cadastrar_produto();
    exibir_produto();
    alterar_produto();
    excluir_produto();
    opcao = menu_garcom();
    cadastrar_garcom();
    exibir_garcom();
    alterar_garcom();
    excluir_garcom();
    opcao = menu_relatorios();



    info();
    return 0;
}


// Funções 

char menu_principal(void) {
    char opc;
    system("clear||cls");
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
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


char menu_relatorios(void) {
    char opc;
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Menu Relatórios         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|                [1] Relatório Comandas                |=====|\n");
    printf("|=====|                [2] Relatório Estoque                 |=====|\n");
    printf("|=====|                [3] Relatório Garçom                  |=====|\n");
    printf("|=====|                [0] Retornar ao Menu Principal        |=====|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("|=====| Escolha uma opção: ");
    scanf("%c", &opc);
    getchar();
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void info(void) {
    system("clear||cls");
    printf("\n");
    printf("|========================================================================================|\n");
    printf("|==================|                    Informações                   |==================|\n");
    printf("|========================================================================================|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|           rojeto de um Sistema de Gestão para um Bar e Restaurante         |=====|\n");
    printf("|=====|                      Sistemas de Informação / UFRN                         |=====|\n");
    printf("|=====|                      Disciplina: Programação                               |=====|\n");
    printf("|=====|                      Professor: Flavius da Luz e Gorgônio                  |=====|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|             Projeto em desenvolvimento por:                                |=====|\n");
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
    printf("|=====|                                               -- desde Set, 2024           |=====|\n");
    printf("|========================================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}
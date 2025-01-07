#include <stdio.h>
#include <stdlib.h>
#include "relatorio.h"


// Funções
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
    return opc;
}


void relatorio_estoque(void) {          //sem funcionalidade no momento
    system("clear||cls");
    printf("\n");
    printf("|=====================================================================|\n");
    printf("|===============|          Relatório Estoque          |===============|\n");
    printf("|=====================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void relatorio_garcom(void) {          //sem funcionalidade no momento
    system("clear||cls");
    printf("\n");
    printf("|=====================================================================|\n");
    printf("|===============|          Relatório Garçom           |===============|\n");
    printf("|=====================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}

#include <stdio.h>
#include <stdlib.h>
#include "relComandas.h"
#include "../comandas/comandas.h"

// Funções

void modulo_relComandas(void) {

    char opcao;

    do {
        opcao = menu_relComandas();

    } while (opcao != '0');
}

char menu_relComandas(void) {

    char op_relatorio;

    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|===========================================================================|\n");
    printf("|===============|         Menu Relatórios De Comandas       |===============|\n");
    printf("|===========================================================================|\n");
    printf("|=====|                                                               |=====|\n");
    printf("|=====|                     [1] Relatório Geral                       |=====|\n");
    printf("|=====|                     [2] Comandas Ativas                       |=====|\n");
    printf("|=====|                     [3] Comandas Inativas                     |=====|\n");
    printf("|=====|                     [0] Retornar ao Menu Relatório            |=====|\n");
    printf("|=====|                                                               |=====|\n");
    printf("|===========================================================================|\n");
    printf("|=====| Escolha uma opção: ");
    scanf("%c", &op_relatorio);
    getchar();
    return op_relatorio;
}
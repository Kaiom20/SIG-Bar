#include <stdio.h>
#include <stdlib.h>
#include "relEstoque.h"
#include "../estoque/estoque.h"

// Funções

void modulo_relEstoque(void) {

    char opcao;

    do {
        opcao = menu_relEstoque();

        switch(opcao) {
            case '1': relEstoque_geral();
                        break;
            case '2': relEstoque_ativos();
                        break;
            case '3': relEstoque_inativos();
                        break;
        }

    } while(opcao != '0');
}


char menu_relEstoque(void) {

    char op_relatorio;

    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|===========================================================================|\n");
    printf("|===============|         Menu Relatórios De Estoque        |===============|\n");
    printf("|===========================================================================|\n");
    printf("|=====|                                                               |=====|\n");
    printf("|=====|                     [1] Relatório Geral                       |=====|\n");
    printf("|=====|                     [2] Estoque Ativos                        |=====|\n");
    printf("|=====|                     [3] Estoque Inativos                      |=====|\n");
    printf("|=====|                     [0] Retornar ao Menu Relatório            |=====|\n");
    printf("|=====|                                                               |=====|\n");
    printf("|===========================================================================|\n");
    printf("|=====| Escolha uma opção: ");
    scanf("%c", &op_relatorio);
    getchar();
    return op_relatorio;
}


void relEstoque_geral(void) {
    FILE* fpEst;
    Estoque* estoque;

    fpEst = fopen("estoque.dat", "rb");
    if (fpEst == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }

    estoque = (Estoque*)malloc(sizeof(Estoque));
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|=====================================================================|\n");
    printf("|===============|                                     |===============|\n");
    printf("|===============|           Relatório Geral           |===============|\n");
    printf("|===============|                                     |===============|\n");
    printf("|=====================================================================|\n");
    while (fread(estoque, sizeof(Estoque), 1, fpEst)) {
        printf("\n |===== ID: %s\n", estoque->idprod);
        printf("\n");
        printf("\n |===== Nome: %s\n", estoque->nome);
        printf("\n");
        printf("\n |===== Quantidade: %s\n", estoque->quant);
        printf("\n");
        printf("\n |===== Valor: %s\n", estoque->valor);
        printf("\n");
        printf("\n |===== Validade: %s\n", estoque->valid);
        printf("|=====================================================================|\n");
    }
    free(estoque);
    printf("\n");
    printf("tecle <ENTER> para continuar... ");
    getchar();
}


void relEstoque_ativos(void) {
    FILE* fpEst;
    Estoque* estoque;

    fpEst = fopen("estoque.dat", "rb");
    if (fpEst == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }

    estoque = (Estoque*)malloc(sizeof(Estoque));
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|===============================================================================|\n");
    printf("|===============|                                               |===============|\n");
    printf("|===============|            Relatório Estoques Ativos          |===============|\n");
    printf("|===============|                                               |===============|\n");
    printf("|===============================================================================|\n");
    while (fread(estoque, sizeof(Estoque), 1, fpEst)) {
        if (estoque->status != 'i') {
            printf("\n |===== ID: %s\n", estoque->idprod);
            printf("\n");
            printf("\n |===== Nome: %s\n", estoque->nome);
            printf("\n");
            printf("\n |===== Quantidade: %s\n", estoque->quant);
            printf("\n");
            printf("\n |===== Valor: %s\n", estoque->valor);
            printf("\n");
            printf("\n |===== Validade: %s\n", estoque->valid);
            printf("|=====================================================================|\n");
        }
    }
    free(estoque);
    printf("\n");
    printf("tecle <ENTER> para continuar... ");
    getchar();
}


void relEstoque_inativos(void) {
    FILE* fpEst;
    Estoque* estoque;

    fpEst = fopen("estoque.dat", "rb");
    if (fpEst == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }

    estoque = (Estoque*)malloc(sizeof(Estoque));
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|===============================================================================|\n");
    printf("|===============|                                               |===============|\n");
    printf("|===============|          Relatório Estoques Inativos          |===============|\n");
    printf("|===============|                                               |===============|\n");
    printf("|===============================================================================|\n");
    while (fread(estoque, sizeof(Estoque), 1, fpEst)) {
        if (estoque->status == 'i') {
            printf("\n |===== ID: %s\n", estoque->idprod);
            printf("\n");
            printf("\n |===== Nome: %s\n", estoque->nome);
            printf("\n");
            printf("\n |===== Quantidade: %s\n", estoque->quant);
            printf("\n");
            printf("\n |===== Valor: %s\n", estoque->valor);
            printf("\n");
            printf("\n |===== Validade: %s\n", estoque->valid);
            printf("|=====================================================================|\n");
        }
    }
    free(estoque);
    printf("\n");
    printf("tecle <ENTER> para continuar... ");
    getchar();
}
#include <stdio.h>
#include <stdlib.h>
#include "relComandas.h"
#include "../comandas/comandas.h"

// Funções

void modulo_relComandas(void) {

    char opcao;

    do {
        opcao = menu_relComandas();

        switch(opcao) {
            case '1': relComandas_geral();
                        break;
        }

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


void relComandas_geral(void) {
    FILE* fpCom;
    Comanda* comanda;

    fpCom = fopen("comanda.dat", "rb");
    if (fpCom == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    comanda = (Comanda*)malloc(sizeof(Comanda));
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|=====================================================================|\n");
    printf("|===============|                                     |===============|\n");
    printf("|===============|           Relatório Geral           |===============|\n");
    printf("|===============|                                     |===============|\n");
    printf("|=====================================================================|\n");
    while (fread(comanda, sizeof(Comanda), 1, fpCom)) {
        printf("\n |===== ID da Comanda: %s\n", comanda->idcomanda);
        printf("\n");
        printf("\n |===== Mesa: %s\n", comanda->mesa);
        printf("\n");
        printf("\n |===== Data: %s\n", comanda->data);
        printf("\n");
        printf("\n |===== Valor R$: %s\n", comanda->valor);
        printf("\n");
        printf("\n |===== ID Garçom: %s\n", comanda->idgarcom);
        printf("|=====================================================================|\n");
    }
    free(comanda);
    printf("\n");
    printf("tecle <ENTER> para continuar... ");
    getchar();
}


void relComandas_ativas(void) {
    FILE* fpCom;
    Comanda* comanda;

    fpCom = fopen("comanda.dat", "rb");
    if (fpCom == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    comanda = (Comanda*)malloc(sizeof(Comanda));
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|===============================================================================|\n");
    printf("|===============|                                               |===============|\n");
    printf("|===============|            Relatório Comandas Ativas          |===============|\n");
    printf("|===============|                                               |===============|\n");
    printf("|===============================================================================|\n");
    while (fread(comanda, sizeof(Comanda), 1, fpCom)) {
        if (comanda->status != 'i') {
            printf("\n |===== ID da Comanda: %s\n", comanda->idcomanda);
            printf("\n");
            printf("\n |===== Mesa: %s\n", comanda->mesa);
            printf("\n");
            printf("\n |===== Data: %s\n", comanda->data);
            printf("\n");
            printf("\n |===== Valor R$: %s\n", comanda->valor);
            printf("\n");
            printf("\n |===== ID Garçom: %s\n", comanda->idgarcom);
            printf("|=====================================================================|\n");
        }
    }
    free(comanda);
    printf("\n");
    printf("tecle <ENTER> para continuar... ");
    getchar();
}


void relComandas_inativas(void) {
    FILE* fpCom;
    Comanda* comanda;

    fpCom = fopen("comanda.dat", "rb");
    if (fpCom == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    comanda = (Comanda*)malloc(sizeof(Comanda));
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|===============================================================================|\n");
    printf("|===============|                                               |===============|\n");
    printf("|===============|            Relatório Comandas Ativas          |===============|\n");
    printf("|===============|                                               |===============|\n");
    printf("|===============================================================================|\n");
    while (fread(comanda, sizeof(Comanda), 1, fpCom)) {
        if (comanda->status == 'i') {
            printf("\n |===== ID da Comanda: %s\n", comanda->idcomanda);
            printf("\n");
            printf("\n |===== Mesa: %s\n", comanda->mesa);
            printf("\n");
            printf("\n |===== Data: %s\n", comanda->data);
            printf("\n");
            printf("\n |===== Valor R$: %s\n", comanda->valor);
            printf("\n");
            printf("\n |===== ID Garçom: %s\n", comanda->idgarcom);
            printf("|=====================================================================|\n");
        }
    }
    free(comanda);
    printf("\n");
    printf("tecle <ENTER> para continuar... ");
    getchar();
}
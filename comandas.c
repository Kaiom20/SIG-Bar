#include <stdio.h>
#include <stdlib.h>
#include "comandas.h"


void modulo_comanda(void){
    char opcao;
    do {
        opcao = menu_comandas();
        switch(opcao){
            case '1': cadastrar_comanda();
                        break;
            case '2': exibir_comanda();
                        break;
            case '3': alterar_comanda();
                        break;
            case '4': excluir_comanda();
                        break;
        }
    } while (opcao != '0');
}


// Funções
char menu_comandas(void) {
    char opc;
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|           Menu Comandas          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|                [1] Cadastrar Comanda                 |=====|\n");
    printf("|=====|                [2] Exibir Comanda                    |=====|\n");
    printf("|=====|                [3] Alterar Comanda                   |=====|\n");
    printf("|=====|                [4] Excluir Comanda                   |=====|\n");
    printf("|=====|                [0] Retornar ao Menu Principal        |=====|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("|=====| Escolha uma opção: ");
    scanf("%c", &opc);
    getchar();
    return opc;
}


void cadastrar_comanda(void) {
    char idcomanda[6];
    char data[11];
    char hora[6];
    char mesa[3];
    char idgarcom[3];
    char valor[8];
    
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|         Cadastrar Comanda        |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID da Comanda: ");
    scanf("%[0-9]", idcomanda);
    getchar();
    printf("|=====|               Data (dd/mm/aaaa): ");
    scanf("%[0-9/]", data);
    getchar();
    printf("|=====|               Hora: ");
    scanf("%[0-9:]", hora);
    getchar();
    printf("|=====|               Mesa: ");
    scanf("%[0-9]", mesa);
    getchar();
    printf("|=====|               ID do Garçom: ");
    scanf("%[0-9]", idgarcom);
    getchar();
    printf("|=====|               Valor: ");
    scanf("%[0-9,]", valor);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void exibir_comanda(void) {
    char idcomanda[6];

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Exibir Comanda          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID da Comanda: ");
    scanf("%[0-9]", idcomanda);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void alterar_comanda(void) {
    char idcomanda[6];

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Alterar Comanda         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID da Comanda: ");
    scanf("%[0-9]", idcomanda);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void excluir_comanda(void) {
    char idcomanda[6];

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Excluir Comanda         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID da Comanda: ");
    scanf("%[0-9]", idcomanda);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}

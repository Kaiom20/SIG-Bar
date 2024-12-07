#include <stdio.h>
#include <stdlib.h>
#include "comandas.h"

// Bilioteca para leitura dos dados:
#include "ler_comandas.h"

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
    FILE* fpCom;
    Comanda* comanda;
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
    fpCom = fopen("comanda.dat", "wb");
    if (fpCom == NULL) {
        printf("Erro na criação do arquivo!\n");
        exit(1);
    }
    comanda = preencheComanda();
    fwrite(comanda, sizeof(Comanda), 1, fpCom);
    fclose(fpCom);
    free(comanda);
}


Comanda* preencheComanda(void) {
    Comanda* comanda;
    comanda = (Comanda*) malloc(sizeof(Comanda));
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|         Cadastrar Comanda        |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    ler_idcom(comanda->idcomanda);
    ler_dataCom(comanda->data);
    ler_hora(comanda->hora);
    ler_mesa(comanda->mesa);
    ler_idgarCom(comanda->idgarcom);
    ler_valorCom(comanda->valor);
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
    return comanda;
}


void exibir_comanda(void) {
    Comanda* comanda;

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Exibir Comanda          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID da Comanda: ");
    scanf("%[0-9]", comanda->idcomanda);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void alterar_comanda(void) {
    Comanda* comanda;

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Alterar Comanda         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID da Comanda: ");
    scanf("%[0-9]", comanda->idcomanda);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void excluir_comanda(void) {
    Comanda* comanda;

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Excluir Comanda         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID da Comanda: ");
    scanf("%[0-9]", comanda->idcomanda);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}
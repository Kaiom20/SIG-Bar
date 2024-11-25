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
    Comanda comanda;

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|         Cadastrar Comanda        |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    ler_idcom(comanda.idcomanda);
    printf("|=====|               Data (dd/mm/aaaa): ");
    scanf("%[0-9/]", comanda.data);
    getchar();
    printf("|=====|               Hora: ");
    scanf("%[0-9:]", comanda.hora);
    getchar();
    printf("|=====|               Mesa: ");
    scanf("%[0-9]", comanda.mesa);
    getchar();
    printf("|=====|               ID do Garçom: ");
    scanf("%[0-9]", comanda.idgarcom);
    getchar();
    printf("|=====|               Valor: ");
    scanf("%[0-9,]", comanda.valor);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void exibir_comanda(void) {
    Comanda comanda;

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Exibir Comanda          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID da Comanda: ");
    scanf("%[0-9]", comanda.idcomanda);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void alterar_comanda(void) {
    Comanda comanda;

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Alterar Comanda         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID da Comanda: ");
    scanf("%[0-9]", comanda.idcomanda);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void excluir_comanda(void) {
    Comanda comanda;

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Excluir Comanda         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID da Comanda: ");
    scanf("%[0-9]", comanda.idcomanda);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}

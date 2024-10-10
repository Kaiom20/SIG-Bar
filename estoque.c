#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

// Funções

char menu_estoque(void) {
    char opc;
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|            Menu Estoque          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|                [1] Cadastrar Produto                 |=====|\n");
    printf("|=====|                [2] Exibir Produto                    |=====|\n");
    printf("|=====|                [3] Alterar Produto                   |=====|\n");
    printf("|=====|                [4] Excluir Produto                   |=====|\n");
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
    return opc;
}


void cadastrar_produto(void) {
    char idprod[6];
    char nome[35];
    char valid[11];
    char quant[5];
    char valor[8];

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|        Cadastrar Produto         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID do Produto: ");
    scanf("%[0-9]", idprod);
    getchar();
    printf("|=====|               Nome: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("|=====|               Validade (dd/mm/aaaa): ");
    scanf("%[0-9/]", valid);
    getchar();
    printf("|=====|               Quantidade: ");
    scanf("%[0-9]", quant);
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


void exibir_produto(void) {
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Exibir Produto          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID do Produto:                         |=====|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void alterar_produto(void) {
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Alterar Produto         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID do Produto:                         |=====|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void excluir_produto(void) {
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Excluir Produto         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID do Produto:                         |=====|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}
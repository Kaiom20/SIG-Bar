#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

// Bilioteca para leitura dos dados:
#include "ler_estoque.h"

void modulo_estoque(void){
    char opcao;
    do {
        opcao = menu_estoque();
        switch(opcao){
            case '1': cadastrar_produto();
                        break;
            case '2': exibir_produto();
                        break;
            case '3': alterar_produto();
                        break;
            case '4': excluir_produto();
                        break;
        }
    } while (opcao != '0');
}


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
    ler_idprod(idprod);
    ler_nomeProd(nome);
    ler_validade(valid);
    ler_quanti(quant);
    ler_valor(valor);
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void exibir_produto(void) {
    char idprod[6];
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Exibir Produto          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID do Produto: ");
    scanf("%[0-9]", idprod);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void alterar_produto(void) {
    char idprod[6];
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Alterar Produto         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID do Produto: ");
    scanf("%[0-9]", idprod);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void excluir_produto(void) {
    char idprod[6];
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Excluir Produto         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID do Produto: ");
    scanf("%[0-9]", idprod);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}
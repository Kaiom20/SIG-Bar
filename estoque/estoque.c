#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

// Bilioteca para leitura dos dados:
#include "ler_estoque.h"

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
    FILE* fpEst;
    Estoque* estoque;
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
    fpEst = fopen("estoque.dat", "ab");
    if (fpEst == NULL) {
        printf("Erro na criação do arquivo!\n");
        exit(1);
    }
    estoque = preencheEstoque();
    fwrite(estoque, sizeof(Estoque), 1, fpEst);
    fclose(fpEst);
    free(estoque);
}


Estoque* preencheEstoque(void) {
    Estoque* estoque;
    estoque = (Estoque*) malloc(sizeof(Estoque));
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|        Cadastrar Produto         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    ler_idprod(estoque->idprod);
    ler_nomeProd(estoque->nome);
    ler_validade(estoque->valid);
    ler_quanti(estoque->quant);
    ler_valor(estoque->valor);
    estoque->status = 'a';
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
    return estoque;
}


Estoque* buscar_produto(void){
    FILE* fpEst;
    Estoque* estoque;
    char idprod[6];
    
    system("clear||cls");
    printf("|=====| Insira o ID do Produto: ");
    scanf("%s", idprod);
    getchar();
    estoque =  (Estoque*) malloc(sizeof(Estoque));
    fpEst = fopen("estoque.dat", "rb");
    if (fpEst == NULL) {
        printf("Ops! Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    while(!feof(fpEst)){
        fread(estoque, sizeof(Estoque), 1, fpEst);
        if((strcmp(estoque->idprod, idprod) == 0) && (estoque->status != 'i')){
            fclose(fpEst);
            return estoque;
        }
    }
    fclose(fpEst);
    return NULL;
}


void exibir_produto(void) {
    Estoque* estoque;
    estoque = buscar_produto();
    if((estoque == NULL) || (estoque->status == 'i')){
        printf("|=====| O produto não existe!\n");
        printf("\t >>>  Pressione <ENTER> para continuar  <<<");
        getchar();
    } else{
        system("clear||cls");
        printf("\n");
        printf("|==================================================================|\n");
        printf("|===============|          Exibir Produto          |===============|\n");
        printf("|==================================================================|\n");
        printf("|=====|                                                      |=====|\n");
        printf("|=====|               Nome: %s\n", estoque->nome);
        printf("|=====|               Validade: %s\n", estoque->valid);
        printf("|=====|               Quantidade: %s\n", estoque->quant);
        printf("|=====|               Valor: %s\n", estoque->valor);
        printf("|=====|                                                      |=====|\n");
        printf("|==================================================================|\n");
        printf("\n");
        printf("\t >>>  Pressione <ENTER> para continuar  <<<");
        getchar();
    }
    free(estoque);
}


void alterar_produto(void) {
    Estoque* estoque;

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Alterar Produto         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID do Produto: ");
    scanf("%[0-9]", estoque->idprod);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void excluir_produto(void) {
    Estoque* estoque;

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Excluir Produto         |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID do Produto: ");
    scanf("%[0-9]", estoque->idprod);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}
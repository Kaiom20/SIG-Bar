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
        printf("Não é possível continuar!\n");
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
    printf("|==================================================================|\n");
    printf("|===============|          Buscar Produto          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               Insira o ID do Produto: ");
    scanf("%s", idprod);
    getchar();
    estoque =  (Estoque*) malloc(sizeof(Estoque));
    fpEst = fopen("estoque.dat", "rb");
    if (fpEst == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar!\n");
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
        printf("|=====|\n");
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
    FILE* fpEst;
    Estoque* estoque;
    Estoque* estoqueLido = buscar_produto();
    int achou = 0;
    
    if(estoqueLido == NULL){
        printf("|=====|\n");
        printf("|=====| O produto não existe!\n");
        printf("\t >>>  Pressione <ENTER> para continuar  <<<");
        getchar();
    } else{
        estoque = (Estoque*) malloc(sizeof(Estoque));
        fpEst = fopen("estoque.dat", "r+b");
        if (fpEst == NULL) {
            printf("Erro na abertura do arquivo!\n");
            printf("Não é possível continuar!\n");
            exit(1);
        }
    
    while(!feof(fpEst)){
        fread(estoque, sizeof(Estoque), 1, fpEst);
        if (strcmp(estoque->idprod, estoqueLido->idprod) == 0 && estoque->status != 'i'){
            achou = 1;
            system("clear||cls");
            printf("|==================================================================|\n");
            printf("|===============|          Alterar Produto         |===============|\n");
            printf("|==================================================================|\n");
            printf("|=====|                                                      |=====|\n");
            ler_idprod(estoque->idprod);
            ler_nomeProd(estoque->nome);
            ler_validade(estoque->valid);
            ler_quanti(estoque->quant);
            ler_valor(estoque->valor);
            fseek(fpEst, -1*sizeof(Estoque), SEEK_CUR);
            fwrite(estoque, sizeof(Estoque), 1, fpEst);
            printf("|=====|\n");
            printf("|=====| O produto foi alterado!\n");
            printf("\t >>>  Pressione <ENTER> para continuar  <<<");
            getchar();
        }
    }
    if(!achou){
        printf("\n|=====| Produto não encontrado!\n");
        printf("\t >>>  Pressione <ENTER> para continuar  <<<");
        getchar();
    }

    fclose(fpEst);
    free(estoque);
    }
    free(estoqueLido);
}


void excluir_produto(void) {
    FILE* fpEst;
    Estoque* estoque;
    Estoque* estoqueLido = buscar_produto();
    int achou = 0;
    
    if(estoqueLido == NULL){
        printf("|=====|\n");
        printf("|=====| O produto não existe!\n");
        printf("\t >>>  Pressione <ENTER> para continuar  <<<");
        getchar();
    } else{
        estoque = (Estoque*) malloc(sizeof(Estoque));
        fpEst = fopen("estoque.dat", "r+b");
        if (fpEst == NULL) {
            printf("Erro na abertura do arquivo!\n");
            printf("Não é possível continuar!\n");
            exit(1);
        }
    
    while(!feof(fpEst)){
        fread(estoque, sizeof(Estoque), 1, fpEst);
        if (strcmp(estoque->idprod, estoqueLido->idprod) == 0 && estoque->status != 'i'){
            achou = 1;
            estoque->status = 'i';
            fseek(fpEst, -1*sizeof(Estoque), SEEK_CUR);
            fwrite(estoque, sizeof(Estoque), 1, fpEst);
            printf("|=====|\n");
            printf("|=====| O produto foi excluído!\n");
            printf("\t >>>  Pressione <ENTER> para continuar  <<<");
            getchar();
        }
    }
    if(!achou){
        printf("\n|=====| Produto não encontrado!\n");
        printf("\t >>>  Pressione <ENTER> para continuar  <<<");
        getchar();
    }

    fclose(fpEst);
    free(estoque);
    }
    free(estoqueLido);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    comanda->status = 'a';
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
    return comanda;
}


Comanda* buscarComanda(void) {
    FILE* fpCom;
    Comanda* comanda;
    char idcomanda[6];

    system("clear||cls");
    printf("|==================================================================|\n");
    printf("|===============|          Buscar Comanda          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               Insira o ID da Comanda: ");
    scanf("%s", idcomanda);
    getchar();
    comanda =  (Comanda*) malloc(sizeof(Comanda));
    fpCom = fopen("comanda.dat", "rb");
    if (fpCom == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar!\n");
        exit(1);
    }
    while (!feof(fpCom)) {
        fread(comanda, sizeof(Comanda), 1, fpCom);
        if((strcmp(comanda->idcomanda, idcomanda) == 0) && (comanda->status != 'i')){
            fclose(fpCom);
            return comanda;
        }
    }
    fclose(fpCom);
    return NULL;
}


void exibir_comanda(void) {
    Comanda* comanda;
    comanda = buscarComanda();
    if((comanda == NULL) || (comanda->status == 'i')) {
        printf("|=====|\n");
        printf("|=====| A comanda não existe!\n");
        printf("\t >>>  Pressione <ENTER> para continuar  <<<");
        getchar();
    } else {
        system("clear||cls");
        printf("\n");
        printf("|==================================================================|\n");
        printf("|===============|          Exibir Comanda          |===============|\n");
        printf("|==================================================================|\n");
        printf("|=====|                                                      |=====|\n");
        printf("|=====|               Data: %s\n", comanda->data);
        printf("|=====|               Validade: %s\n", comanda->hora);
        printf("|=====|               Mesa: %s\n", comanda->mesa);
        printf("|=====|               ID do Garçom: %s\n", comanda->idgarcom);
        printf("|=====|               Valor: %s\n", comanda->valor);
        printf("|=====|                                                      |=====|\n");
        printf("|==================================================================|\n");
        printf("\n");
        printf("\t >>>  Pressione <ENTER> para continuar  <<<");
        getchar();
    }
    free(comanda);
}


void alterar_comanda(void) {
    FILE* fpCom;
    Comanda* comanda;
    Comanda* comandaLido = buscarComanda();
    int achou = 0;

    if(comandaLido == NULL){
        printf("|=====|\n");
        printf("|=====| A Comanda não existe!\n");
        printf("\t >>>  Pressione <ENTER> para continuar  <<<");
        getchar();
    } else {
        comanda = (Comanda*) malloc(sizeof(Comanda));
        fpCom = fopen("comanda.dat", "r+b");
        if (fpCom == NULL) {
            printf("Erro na abertura do arquivo!\n");
            printf("Não é possível continuar!\n");
            exit(1);
        }
    }

    while(!feof(fpCom)) {
        fread(comanda, sizeof(Comanda), 1, fpCom);
        if (strcmp(comanda->idcomanda, comandaLido->idcomanda) == 0 && comanda->status != 'i') {
            achou = 1;
            system("clear||cls");
            printf("|==================================================================|\n");
            printf("|===============|          Alterar Comanda         |===============|\n");
            printf("|==================================================================|\n");
            printf("|=====|                                                      |=====|\n");
            printf("|=====|                 Insira os novos dados:               |=====|\n");
            ler_idcom(comanda->idcomanda);
            ler_dataCom(comanda->data);
            ler_hora(comanda->hora);
            ler_mesa(comanda->mesa);
            ler_idgarCom(comanda->idgarcom);
            ler_valorCom(comanda->valor);
            fseek(fpCom, -1*sizeof(Comanda), SEEK_CUR);
            fwrite(comanda, sizeof(Comanda), 1, fpCom);
            printf("|=====|\n");
            printf("|=====| A comanda foi alterada!\n");
            printf("\t >>>  Pressione <ENTER> para continuar  <<<");
            getchar();
            break;
        }
    }
    if(!achou){
        printf("\n|=====| Comanda não encontrada!\n");
        printf("\t >>>  Pressione <ENTER> para continuar  <<<");
        getchar();
    }

    fclose(fpCom);
    free(comanda);
    free(comandaLido);
}


void excluir_comanda(void) {
    FILE* fpCom;
    Comanda* comanda;
    Comanda* comandaLido = buscarComanda();
    int achou = 0;

    if(comandaLido == NULL) {
        printf("|=====|\n");
        printf("|=====| A comanda não existe!\n");
        printf("\t >>>  Pressione <ENTER> para continuar  <<<");
        getchar();
    } else {
        comanda = (Comanda*) malloc(sizeof(Comanda));
        fpCom = fopen("comanda.dat", "r+b");
        if (fpCom == NULL) {
            printf("Erro na abertura do arquivo!\n");
            printf("Não é possível continuar!\n");
            exit(1);
        }

    while(!feof(fpCom)) {
        fread(comanda, sizeof(Comanda), 1, fpCom);
        if (strcmp(comanda->idcomanda, comandaLido->idcomanda) == 0 && comanda->status != 'i'){
            achou = 1;
            comanda->status = 'i';
            fseek(fpCom, -1*sizeof(comanda), SEEK_CUR);
            fwrite(comanda, sizeof(Comanda), 1, fpCom);
            printf("|=====|\n");
            printf("|=====| A comanda foi excluído!\n");
            printf("\t >>>  Pressione <ENTER> para continuar  <<<");
            getchar();
        }
    }
    if(!achou) {
        printf("\n|=====| Comanda não encontrado!\n");
        printf("\t >>>  Pressione <ENTER> para continuar  <<<");
        getchar();
    }
    fclose(fpCom);
    free(comanda);
    free(comandaLido);
    }
}
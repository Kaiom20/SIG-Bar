#include <stdio.h>
#include <stdlib.h>
#include "garcom.h"

// Bilioteca para leitura dos dados:
#include "ler_garcom.h"

// Funções
char menu_garcom(void) {
    char opc;
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|            Menu Garçom           |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|                [1] Cadastrar Garçom                  |=====|\n");
    printf("|=====|                [2] Exibir Garçom                     |=====|\n");
    printf("|=====|                [3] Alterar Garçom                    |=====|\n");
    printf("|=====|                [4] Excluir Garçom                    |=====|\n");
    printf("|=====|                [0] Retornar ao Menu Principal        |=====|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("|=====| Escolha uma opção: ");
    scanf("%c", &opc);
    getchar();
    return opc;
}


void cadastrar_garcom(void) {
    FILE* fpGarc;
    Garcom* garcom;
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
    fpGarc = fopen("garcom.dat", "wb");
    if (fpGarc == NULL) {
        printf("Erro na criação do arquivo!\n");
        exit(1);
    }
    garcom = preencheGarcom();
    fwrite(garcom, sizeof(Garcom), 1, fpGarc);
    fclose(fpGarc);
    free(garcom);
}


Garcom* preencheGarcom(void) {
    Garcom* garcom;
    garcom = (Garcom*) malloc(sizeof(Garcom));
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|        Cadastrar Garçom          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    ler_nome(garcom->nome);
    ler_nasc(garcom->nasc);
    ler_cpf(garcom->cpf);
    ler_fone(garcom->telefone);
    ler_idgar(garcom->id_garcom);
    garcom->status = 'a';
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
    return garcom;
}

Garcom* buscar_garcom(void){
    FILE* fpGarc;
    Garcom* garcom;
    char id_garcom[4];
    
    system("clear||cls");
    printf("|==================================================================|\n");
    printf("|===============|           Buscar Garçom          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               Insira o ID do Garçom: ");
    scanf("%s", id_garcom);
    getchar();
    garcom =  (Garcom*) malloc(sizeof(Garcom));
    fpGarc = fopen("garcom.dat", "rb");
    if (fpGarc == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar!\n");
        exit(1);
    }
    while(!feof(fpGarc)){
        fread(garcom, sizeof(Garcom), 1, fpGarc);
        if((strcmp(garcom->id_garcom, id_garcom) == 0) && (garcom->status != 'i')){
            fclose(fpGarc);
            return garcom;
        }
    }
    fclose(fpGarc);
    return NULL;
}


void exibir_garcom(void) {
    Garcom* garcom;
    
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Exibir Garçom           |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID do Garçom: ");
    scanf("%[0-9]", garcom->id_garcom);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void alterar_garcom(void) {
    FILE* fpGarc;
    Garcom* garcom;
    Garcom* garcomLido = buscar_garcom();
    int achou = 0;
    
    if(garcomLido == NULL){
        printf("|=====|\n");
        printf("|=====| O garçom não existe!\n");
        printf("\t >>>  Pressione <ENTER> para continuar  <<<");
        getchar();
    } else{
        garcom = (Garcom*) malloc(sizeof(Garcom));
        fpGarc = fopen("garcom.dat", "r+b");
        if (fpGarc == NULL) {
            printf("Erro na abertura do arquivo!\n");
            printf("Não é possível continuar!\n");
            exit(1);
        }
    
    while(!feof(fpGarc)){
        fread(garcom, sizeof(Garcom), 1, fpGarc);
        if (strcmp(garcom->id_garcom, garcomLido->id_garcom) == 0 && garcom->status != 'i'){
            achou = 1;
            system("clear||cls");
            printf("|==================================================================|\n");
            printf("|===============|           Alterar Garçom         |===============|\n");
            printf("|==================================================================|\n");
            printf("|=====|                                                      |=====|\n");
            printf("|=====|                 Insira os novos dados:               |=====|\n");
            ler_nome(garcom->nome);
            ler_nasc(garcom->nasc);
            ler_cpf(garcom->cpf);
            ler_fone(garcom->telefone);
            ler_idgar(garcom->id_garcom);
            fseek(fpGarc, -1*sizeof(Garcom), SEEK_CUR);
            fwrite(garcom, sizeof(Garcom), 1, fpGarc);
            printf("|=====|\n");
            printf("|=====| O garçom foi alterado!\n");
            printf("\t >>>  Pressione <ENTER> para continuar  <<<");
            getchar();
        }
    }
    if(!achou){
        printf("\n|=====| Garçom não encontrado!\n");
        printf("\t >>>  Pressione <ENTER> para continuar  <<<");
        getchar();
    }

    fclose(fpGarc);
    free(garcom);
    }
    free(garcomLido);
}


void excluir_garcom(void) {
    Garcom* garcom;

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Excluir Garçom          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID do Garçom: ");
    scanf("%[0-9]", garcom->id_garcom);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}
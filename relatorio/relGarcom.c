#include <stdio.h>
#include <stdlib.h>
#include "relGarcom.h"
#include "../garcom/garcom.h"

// Funções

void modulo_relGarcom(void) {

    char opcao;

    do {
        opcao = menu_relGarcom();

        switch(opcao) {
            case '1': relGarcom_geral();
                        break;
            case '2': relGarcom_ativos();
                        break;
            case '3': relGarcom_inativos();
                        break;
            case '4': relGarcom_ordenado();
                        break;
        }
        
    } while (opcao != '0');
}

char menu_relGarcom(void) {

    char op_relatorio;

    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|===========================================================================|\n");
    printf("|===============|          Menu Relatórios De Garçom        |===============|\n");
    printf("|===========================================================================|\n");
    printf("|=====|                                                               |=====|\n");
    printf("|=====|                      [1] Relatório Geral                      |=====|\n");
    printf("|=====|                      [2] Garçons Ativos                       |=====|\n");
    printf("|=====|                      [3] Garçons Inativos                     |=====|\n");
    printf("|=====|                      [4] Garçons (Ordem Alfabética)           |=====|\n");
    printf("|=====|                      [0] Retornar ao Menu Relatório           |=====|\n");
    printf("|=====|                                                               |=====|\n");
    printf("|===========================================================================|\n");
    printf("|=====| Escolha uma opção: ");
    scanf("%c", &op_relatorio);
    getchar();
    return op_relatorio;
}


void relGarcom_geral(void) {
    FILE* fpGarc;
    Garcom* garcom;

    fpGarc = fopen("garcom.dat", "rb");
    if (fpGarc == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    garcom = (Garcom*)malloc(sizeof(Garcom));
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|=====================================================================|\n");
    printf("|===============|                                     |===============|\n");
    printf("|===============|           Relatório Geral           |===============|\n");
    printf("|===============|                                     |===============|\n");
    printf("|=====================================================================|\n");
    while (fread(garcom, sizeof(Garcom), 1, fpGarc)) {
        printf("\n |===== ID: %s\n", garcom->id_garcom);
        printf("\n");
        printf("\n |===== Nome: %s\n", garcom->nome);
        printf("\n");
        printf("\n |===== CPF: %s\n", garcom->cpf);
        printf("\n");
        printf("\n |===== Telefone: %s\n", garcom->telefone);
        printf("\n");
        printf("\n |===== Data de Nascimento: %s\n", garcom->nasc);
        printf("|=====================================================================|\n");
    }
    free(garcom);
    printf("\n");
    printf("tecle <ENTER> para continuar... ");
    getchar();
}


void relGarcom_ativos(void) {
    FILE* fpGarc;
    Garcom* garcom;

    fpGarc = fopen("garcom.dat", "rb");
    if (fpGarc == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    garcom = (Garcom*)malloc(sizeof(Garcom));
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|==============================================================================|\n");
    printf("|===============|                                              |===============|\n");
    printf("|===============|            Relatório Garçons Ativos          |===============|\n");
    printf("|===============|                                              |===============|\n");
    printf("|==============================================================================|\n");
    while (fread(garcom, sizeof(Garcom), 1, fpGarc)) {
        if (garcom->status != 'i') {
            printf("\n |===== ID: %s\n", garcom->id_garcom);
            printf("\n");
            printf("\n |===== Nome: %s\n", garcom->nome);
            printf("\n");
            printf("\n |===== CPF: %s\n", garcom->cpf);
            printf("\n");
            printf("\n |===== Telefone: %s\n", garcom->telefone);
            printf("\n");
            printf("\n |===== Data de Nascimento: %s\n", garcom->nasc);
            printf("|=====================================================================|\n");
        }
    }
    free(garcom);
    printf("\n");
    printf("tecle <ENTER> para continuar... ");
    getchar();
}


void relGarcom_inativos(void) {
    FILE* fpGarc;
    Garcom* garcom;

    fpGarc = fopen("garcom.dat", "rb");
    if (fpGarc == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }
    garcom = (Garcom*)malloc(sizeof(Garcom));
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|==============================================================================|\n");
    printf("|===============|                                              |===============|\n");
    printf("|===============|          Relatório Garçons Inativos          |===============|\n");
    printf("|===============|                                              |===============|\n");
    printf("|==============================================================================|\n");
    while (fread(garcom, sizeof(Garcom), 1, fpGarc)) {
        if (garcom->status == 'i') {
            printf("\n |===== ID: %s\n", garcom->id_garcom);
            printf("\n");
            printf("\n |===== Nome: %s\n", garcom->nome);
            printf("\n");
            printf("\n |===== CPF: %s\n", garcom->cpf);
            printf("\n");
            printf("\n |===== Telefone: %s\n", garcom->telefone);
            printf("\n");
            printf("\n |===== Data de Nascimento: %s\n", garcom->nasc);
            printf("|=====================================================================|\n");
        }
    }
    free(garcom);
    printf("\n");
    printf("tecle <ENTER> para continuar... ");
    getchar();
}


Lista* lista_ordenada(void) { //Créditos: Fillipe, João Victor e ChatGPT.
    FILE* fpGarc;
    Garcom* garcom;
    Lista* novo;
    Lista* l = NULL;

    fpGarc = fopen("garcom.dat", "rb");
    if (fpGarc == NULL) {
        printf("Erro na abertura do arquivo!\n");
        printf("Não é possível continuar...\n");
        exit(1);
    }

    while (1) {
        garcom = (Garcom*)malloc(sizeof(Garcom));
        if (fread(garcom, sizeof(Garcom), 1, fpGarc) != 1) {
            free(garcom);
            break;
        }

        novo = (Lista*)malloc(sizeof(Lista));
        novo->garcom = garcom;
        novo->prox = NULL;

        if (l == NULL) {
            l = novo;
        } else if (strcmp(novo->garcom->nome, l->garcom->nome) < 0) {
            novo->prox = l;
            l = novo;
        } else {
            Lista* ant = l;
            Lista* atu = l->prox;
            while ((atu != NULL) && (strcmp(novo->garcom->nome, atu->garcom->nome) > 0)) {
                ant = atu;
                atu = atu->prox;
            }
            ant->prox = novo;
            novo->prox = atu;
        }
    }
    fclose(fpGarc);
    return 1;
}


void imprime_lista(Lista* l){
    if (l == NULL) {
        printf("\tNão existem clientes cadastrados!\n");
        printf("\tTecle <ENTER> para prosseguir... ");
        getchar();
        return;
    }
    while(l != NULL) {
        printf("\n |===== ID: %s\n", l->garcom->id_garcom);
        printf("\n");
        printf("\n |===== Nome: %s\n", l->garcom->nome);
        printf("\n");
        printf("\n |===== CPF: %s\n", l->garcom->cpf);
        printf("\n");
        printf("\n |===== Telefone: %s\n", l->garcom->telefone);
        printf("\n");
        printf("\n |===== Data de Nascimento: %s\n", l->garcom->nasc);
        printf("|=====================================================================|\n");
        l = l->prox;
    }
}


void limpa_lista(Lista* l) { //Créditos: Flavius Gorgônio || @flgorgonio
    Lista *p = l;
    while(p != NULL) {
        Lista *t = p->prox;
        free(p->garcom);
        free(p);
        p = t;
    }
}


void relGarcom_ordenado(void) {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|==============================================================================|\n");
    printf("|===============|                                              |===============|\n");
    printf("|===============|               Relatório Garçons              |===============|\n");
    printf("|===============|                Ordem Alfabética              |===============|\n");
    printf("|===============|                                              |===============|\n");
    printf("|==============================================================================|\n");
    Lista* l = lista_ordenada();
    imprime_lista(l);
    limpa_lista(l);
    printf("\n");
    printf("tecle <ENTER> para continuar... ");
    getchar();
}
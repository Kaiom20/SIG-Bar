#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "relatorio_estoque.h"
#include "../estoque/estoque.h"

void relatorio_estoque(void) {
    char op;
    do {
        op = menu_relatorio_estoque();
        switch(op) {
            case '1': E_geral();
                      break;
            case '2': E_ativos();
                      break;
            case '3': E_inativos();
                      break;
        }         
    } while (op != '0');
}

char menu_relatorio_estoque(void) {
    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    char op;
    printf("|===========================================================================|\n");
    printf("|                - - - - Menu Relatorio Estoque- - - -                      |\n");
    printf("|                                                                           |\n");
    printf("|                          1 - Relatorio Geral                              |\n");
    printf("|                          2 - Ativos                                       |\n");
    printf("|                          3 - Inativos                                     |\n");
    printf("|                          0 - Sair                                         |\n");
    printf("|===========================================================================|\n");
    scanf("%c", &op);
    getchar();
    return op;
}

void E_geral(void) {
   
    Estoque* estoque;
    estoque = (Estoque*) malloc(sizeof(Estoque)); 
    FILE* fp;
    fp = fopen("estoque.dat", "rb");

    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|===========================================================================|\n");
    printf("***                                                                        ***\n");
    printf("***              - - - - Relatório Geral de Estoque - - - -                ***\n");
    printf("***                                                                        ***\n");
    printf("|===========================================================================|\n");

    while(fread(estoque, sizeof(Estoque), 1, fp)) { 
        printf("\n");
        printf("|===========================================================================|\n");
        printf("***                                                                         \n");
        printf("*** ID: %s                                                                  \n", estoque->idprod);  
        printf("*** Nome: %s                                                                \n", estoque->nome);
        printf("*** Valid: %s                                                               \n", estoque->valid);
        printf("*** Quantidade: %s                                                          \n", estoque->quant);  
        printf("*** Valor: %s                                                               \n", estoque->valor);
        printf("***                                                                         \n");
        printf("|===========================================================================|\n");
    }
    free(estoque);
    fclose(fp);

    printf("\n>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void E_ativos(void) {

    Estoque* estoque;
    estoque = (Estoque*) malloc(sizeof(Estoque)); 
    FILE* fp;
    fp = fopen("estoque.dat", "rb");

    system("clear || cls"); // se for Linux use 'clear' se for Windows use 'cls'
    printf("\n");
    printf("|===========================================================================|\n");
    printf("***                                                                        ***\n");
    printf("***              - - - - Relatório Geral de Estoque - - - -                ***\n");
    printf("***                                                                        ***\n");
    printf("|===========================================================================|\n");

    while(fread(estoque, sizeof(Estoque), 1, fp)) { 
        if(estoque->status == 'a') {
        printf("\n");
        printf("|===========================================================================|\n");
        printf("***                                                                         \n");
        printf("*** ID: %s                                                                  \n", estoque->idprod);  
        printf("*** Nome: %s                                                                \n", estoque->nome);
        printf("*** Valid: %s                                                               \n", estoque->valid);
        printf("*** Quantidade: %s                                                          \n", estoque->quant);  
        printf("*** Valor: %s                                                               \n", estoque->valor);
        printf("***                                                                         \n");
        printf("|===========================================================================|\n");
        }
    }
    free(estoque);
    fclose(fp);


    printf("*** Relatório de Estoque Ativo ***\n");
    getchar();
}

void E_inativos(void) {

    Estoque* estoque;
    estoque = (Estoque*) malloc(sizeof(Estoque)); 
    FILE* fp;
    fp = fopen("estoque.dat", "rb");

    printf("|===========================================================================|\n");
    printf("***                                                                        ***\n");
    printf("***              - - - - Relatório Geral de Estoque - - - -                ***\n");
    printf("***                                                                        ***\n");
    printf("|===========================================================================|\n");

    while(fread(estoque, sizeof(Estoque), 1, fp)) { 
        if(estoque->status == 'i') {
        printf("\n");
        printf("|===========================================================================|\n");
        printf("***                                                                         \n");
        printf("*** ID: %s                                                                  \n", estoque->idprod);  
        printf("*** Nome: %s                                                                \n", estoque->nome);
        printf("*** Valid: %s                                                               \n", estoque->valid);
        printf("*** Quantidade: %s                                                          \n", estoque->quant);  
        printf("*** Valor: %s                                                               \n", estoque->valor);
        printf("***                                                                         \n");
        printf("|===========================================================================|\n");
        }
    }
    free(estoque);
    fclose(fp);


    printf("*** Relatório de Estoque Inativo (SEM INATIVOS NO MOMENTO) ***\n");
    getchar();
}
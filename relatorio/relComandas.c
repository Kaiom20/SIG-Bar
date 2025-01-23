#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "relComandas.h"
#include "../comandas/comandas.h"

void relatorio_comanda(void) {
    char op;
    do {
        op = menu_relatorio_comanda();
        switch(op) {
            case '1': C_geral();
                      break;
            case '2': C_ativos();
                      break;
            case '3': C_inativos();
                      break;
        }         
    } while (op != '0');
}

char menu_relatorio_comanda(void) {
    char op;
    printf("*******************************************************************************\n");
    printf("***                - - - - Menu Relatorio Comanda- - - -                    ***\n");
    printf("***         1 - Relatorio Geral                                             ***\n");
    printf("***         2 - Ativos                                                      ***\n");
    printf("***         3 - Inativos                                                    ***\n");
    printf("***         0 - Sair                                                        ***\n");
    printf("*******************************************************************************\n");
    scanf("%c", &op);
    getchar();
    return op;
}

void C_geral(void) {
   
    Comanda* comanda;
    comanda = (Comanda*) malloc(sizeof(Comanda)); 
    FILE* fp;
    fp = fopen("comanda.dat", "rb");

    printf("*******************************************************************************\n");
    printf("***                                                                         ***\n");
    printf("***              - - - - Relatório Geral de Comanda - - - -                 ***\n");
    printf("***                                                                         ***\n");
    printf("*******************************************************************************\n");

    while(fread(comanda, sizeof(Comanda), 1, fp)) { 
        printf("*******************************************************************************\n");
        printf("***                                                                         ***\n");
        printf("*** ID: %s                                                                  ***\n", comanda->idcomanda);  // Corrigido para %s
        printf("*** Data: %s                                                                ***\n", comanda->data);
        printf("*** Hora: %s                                                               ***\n", comanda->hora);
        printf("*** Mesa: %s                                                          ***\n", comanda->mesa);  // Corrigido para %s
        printf("*** Garcom: %s                                                               ***\n", comanda->idgarcom);
        printf("*** Valor: %s                                                               ***\n", comanda->valor);
        printf("*** status: %d                                                              ***\n", comanda->status);
        printf("***                                                                         ***\n");
        printf("*******************************************************************************\n");
    }
    free(comanda);
    fclose(fp);

    printf("\n>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void C_ativos(void) {

      
    Comanda* comanda;
    comanda = (Comanda*) malloc(sizeof(Comanda)); 
    FILE* fp;
    fp = fopen("comanda.dat", "rb");

    printf("*******************************************************************************\n");
    printf("***                                                                         ***\n");
    printf("***             - - - - Relatório  de Comandas Ativas- - - -                 ***\n");
    printf("***                                                                         ***\n");
    printf("*******************************************************************************\n");

    while(fread(comanda, sizeof(Comanda), 1, fp)) { 
        if( comanda->status == 'a'){
        printf("*******************************************************************************\n");
        printf("***                                                                         ***\n");
        printf("*** ID: %s                                                                  ***\n", comanda->idcomanda);  // Corrigido para %s
        printf("*** Data: %s                                                                ***\n", comanda->data);
        printf("*** Hora: %s                                                               ***\n", comanda->hora);
        printf("*** Mesa: %s                                                          ***\n", comanda->mesa);  // Corrigido para %s
        printf("*** Garcom: %s                                                               ***\n", comanda->idgarcom);
        printf("*** Valor: %s                                                               ***\n", comanda->valor);
        printf("*** status: %d                                                              ***\n", comanda->status);
        printf("***                                                                         ***\n");
        printf("*******************************************************************************\n");
        }
    }
    free(comanda);
    fclose(fp);

    printf("\n>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void C_inativos(void) {

     Comanda* comanda;
    comanda = (Comanda*) malloc(sizeof(Comanda)); 
    FILE* fp;
    fp = fopen("comanda.dat", "rb");

    printf("*******************************************************************************\n");
    printf("***                                                                         ***\n");
    printf("***             - - - - Relatório de Comandas Inativas  - - - -             ***\n");
    printf("***                                                                         ***\n");
    printf("*******************************************************************************\n");

    while(fread(comanda, sizeof(Comanda), 1, fp)) { 
        if( comanda->status == 'i'){
        printf("*******************************************************************************\n");
        printf("***                                                                         ***\n");
        printf("*** ID: %s                                                                  ***\n", comanda->idcomanda);  // Corrigido para %s
        printf("*** Data: %s                                                                ***\n", comanda->data);
        printf("*** Hora: %s                                                               ***\n", comanda->hora);
        printf("*** Mesa: %s                                                          ***\n", comanda->mesa);  // Corrigido para %s
        printf("*** Garcom: %s                                                               ***\n", comanda->idgarcom);
        printf("*** Valor: %s                                                               ***\n", comanda->valor);
        printf("*** status: %d                                                              ***\n", comanda->status);
        printf("***                                                                         ***\n");
        printf("*******************************************************************************\n");
        }
    }
    free(comanda);
    fclose(fp);

    printf("\n>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


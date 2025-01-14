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
    while (fread(garcom, sizeof(Garcom), 1, fpGarc)){
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












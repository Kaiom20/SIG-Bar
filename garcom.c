#include <stdio.h>
#include <stdlib.h>
#include "garcom.h"

// Funções

void modulo_garcom(void) {
    
    char opcao;

    do {
        opcao = menu_garcom();

        switch(opcao) {

            case '1':       cadastrar_garcom();
                                break;
                                
            case '2':       exibir_garcom();
                                break;

            case '3':       alterar_garcom();
                                break;

            case '4':       excluir_garcom();
                                break;
        }

    } while (opcao != '0');
}



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
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
    return opc;
}


void cadastrar_garcom(void) {
    char nome[52];
    char nasc[12];
    char cpf[16];
    char telefone[16];
    char id_garcom[4];

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|        Cadastrar Garçom          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|         Nome: ");
    scanf("%[A-ZÁÉÍÓÚÃÕÂÊÎÔÛÀÇ a-záéíóúãõâêîôûàç]", nome);
    getchar();
    printf("|=====|         Data de nascimento: ");
    scanf("%[0-9/]", nasc);
    getchar();
    printf("|=====|         CPF: ");
    scanf("%[0-9.-]", cpf);
    getchar();
    printf("|=====|         Telefone: ");
    scanf("%[0-9()-]", telefone);
    getchar();
    printf("|=====|         ID do Garçom: ");
    scanf("%[0-9]", id_garcom);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void exibir_garcom(void) {
    char id_garcom[4];
    
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Exibir Garçom           |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID do Garçom: ");
    scanf("%[0-9]", id_garcom);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void alterar_garcom(void) {
    char id_garcom[4];

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Alterar Garçom          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID do Garçom: ");
    scanf("%[0-9]", id_garcom);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}


void excluir_garcom(void) {
    char id_garcom[4];

    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Excluir Garçom          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|               ID do Garçom: ");
    scanf("%[0-9]", id_garcom);
    getchar();
    printf("|=====|                                                      |=====|\n");
    printf("|==================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}
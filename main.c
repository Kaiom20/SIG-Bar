/*
|=============================================================|
|=================|     Projeto SIG-Bar     |=================|
|=============================================================|
|=====|   Sistema de Gest�o para um Bar e Restaurante   |=====|
|=====|          Sistemas de Informa��o / UFRN          |=====|
|=====|                  Programa��o                    |=====|
|=====|      Alunos: Kaio M�rcio e Fillipe Medeiros     |=====|
|=====|                   Vers�o 0.1                    |=====|
|=============================================================|
*/

#include <stdio.h>
#include <locale.h>

// Assinatura das fun��es
void menu_principal(void);
void menu_comandas(void);
void menu_estoque(void);
void menu_garcom(void);
void menu_relatorios(void);
void menu_info(void);


// Programa Principal
int main(void) {
    setlocale(LC_ALL, "Portuguese");
    menu_principal();
    menu_comandas();
    menu_estoque();
    menu_garcom();
    menu_relatorios();
    menu_info();
    return 0;
}


// Fun��es 

void menu_principal(void) {
    printf("\n");
    printf("|==============================================================|\n");
    printf("|===============|        Menu Principal        |===============|\n");
    printf("|==============================================================|\n");
    printf("|==========|                                        |==========|\n");
    printf("|==========|           [1] Menu Comandas            |==========|\n");
    printf("|==========|           [2] Menu Estoque             |==========|\n");
    printf("|==========|           [3] Menu Gar�om              |==========|\n");
    printf("|==========|           [4] Menu Relat�rios          |==========|\n");
    printf("|==========|           [5] Menu Informa��es         |==========|\n");
    printf("|==========|           [0] Sair                     |==========|\n");
    printf("|==========|                                        |==========|\n");
    printf("|==============================================================|\n");
    printf("\n");
}


void menu_comandas(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|           Menu Comandas          |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|           [1] Cadastrar Comanda            |==========|\n");
    printf("|==========|           [2] Exibir Comanda               |==========|\n");
    printf("|==========|           [3] Alterar Comanda              |==========|\n");
    printf("|==========|           [4] Excluir Comanda              |==========|\n");
    printf("|==========|           [0] Retornar ao Menu Principal   |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}


void menu_estoque(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|            Menu Estoque          |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|           [1] Cadastrar Produto            |==========|\n");
    printf("|==========|           [2] Exibir Produto               |==========|\n");
    printf("|==========|           [3] Alterar Produto              |==========|\n");
    printf("|==========|           [4] Excluir Produto              |==========|\n");
    printf("|==========|           [0] Retornar ao Menu Principal   |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}


void menu_garcom(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|            Menu Gar�om           |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|           [1] Cadastrar Gar�om             |==========|\n");
    printf("|==========|           [2] Exibir Gar�om                |==========|\n");
    printf("|==========|           [3] Alterar Gar�om               |==========|\n");
    printf("|==========|           [4] Excluir Gar�om               |==========|\n");
    printf("|==========|           [0] Retornar ao Menu Principal   |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}


void menu_relatorios(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Menu Relat�rios         |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|           [1] Relat�rio Comandas           |==========|\n");
    printf("|==========|           [2] Relat�rio Estoque            |==========|\n");
    printf("|==========|           [3] Relat�rio Gar�om             |==========|\n");
    printf("|==========|           [0] Retornar ao Menu Principal   |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}
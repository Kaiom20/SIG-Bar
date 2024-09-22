/*
|=============================================================|
|=================|     Projeto SIG-Bar     |=================|
|=============================================================|
|=====|   Sistema de Gestão para um Bar e Restaurante   |=====|
|=====|          Sistemas de Informação / UFRN          |=====|
|=====|                  Programação                    |=====|
|=====|      Alunos: Kaio Márcio e Fillipe Medeiros     |=====|
|=====|                   Versão 0.1                    |=====|
|=============================================================|
*/

#include <stdio.h>


// Assinatura das funções
void menu_principal(void);
void menu_comandas(void);
void menu_estoque(void);
void menu_garcons(void);
void menu_relatorios(void);
void menu_info(void);


// Programa Principal
int main(void) {
    menu_principal();
    menu_comandas();
    menu_estoque();
    menu_garcons();
    menu_relatorios();
    menu_info();
    return 0;
}


// Funções 

void menu_principal(void) {
    printf("\n");
    printf("|==============================================================|\n");
    printf("|===============|        Menu Principal        |===============|\n");
    printf("|==============================================================|\n");
    printf("|==========|                                        |==========|\n");
    printf("|==========|           [1] Módulo Comandas          |==========|\n");
    printf("|==========|           [2] Módulo Estoque           |==========|\n");
    printf("|==========|           [3] Módulo Garçons           |==========|\n");
    printf("|==========|           [4] Módulo Relatórios        |==========|\n");
    printf("|==========|           [5] Módulo Informações       |==========|\n");
    printf("|==========|           [0] Sair                     |==========|\n");
    printf("|==========|                                        |==========|\n");
    printf("|==============================================================|\n");
    printf("\n");
}
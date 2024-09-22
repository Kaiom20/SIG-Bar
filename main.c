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



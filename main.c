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
#include <stdlib.h>
#include <locale.h>

// Assinatura das funções
void menu_principal(void);
void menu_comandas(void);
void cadastrar_comanda(void);
void exibir_comanda(void);
void alterar_comanda(void);
void excluir_comanda(void);
void menu_estoque(void);




void menu_garcom(void);





void menu_relatorios(void);



void info(void);


// Programa Principal
int main(void) {
    setlocale(LC_ALL, "Portuguese");
    menu_principal();
    menu_comandas();
    cadastrar_comanda();
    exibir_comanda();
    alterar_comanda();
    excluir_comanda();
    menu_estoque();




    menu_garcom();




    menu_relatorios();



    info();
    return 0;
}


// Funções 

void menu_principal(void) {
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Menu Principal          |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|             [1] Menu Comandas              |==========|\n");
    printf("|==========|             [2] Menu Estoque               |==========|\n");
    printf("|==========|             [3] Menu Garçom                |==========|\n");
    printf("|==========|             [4] Menu Relatórios            |==========|\n");
    printf("|==========|             [5] Informações                |==========|\n");
    printf("|==========|             [0] Sair                       |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
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


void cadastrar_comanda(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|         Cadastrar Comanda        |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|          ID da Comanda:                    |==========|\n");
    printf("|==========|          Data:                             |==========|\n");
    printf("|==========|          Hora:                             |==========|\n");
    printf("|==========|          Mesa:                             |==========|\n");
    printf("|==========|          ID do Garçom:                     |==========|\n");
    printf("|==========|          Valor:                            |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}


void exibir_comanda(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Exibir Comanda          |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|          ID da Comanda:                    |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}


void alterar_comanda(void) {

}


void excluir_comanda(void) {

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
    printf("|===============|            Menu Garçom           |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|           [1] Cadastrar Garçom             |==========|\n");
    printf("|==========|           [2] Exibir Garçom                |==========|\n");
    printf("|==========|           [3] Alterar Garçom               |==========|\n");
    printf("|==========|           [4] Excluir Garçom               |==========|\n");
    printf("|==========|           [0] Retornar ao Menu Principal   |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}


void menu_relatorios(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Menu Relatórios         |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|           [1] Relatório Comandas           |==========|\n");
    printf("|==========|           [2] Relatório Estoque            |==========|\n");
    printf("|==========|           [3] Relatório Garçom             |==========|\n");
    printf("|==========|           [0] Retornar ao Menu Principal   |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}


void info(void) {
    printf("\n");
    printf("|========================================================================================|\n");
    printf("|==================|                    Informações                   |==================|\n");
    printf("|========================================================================================|\n");
    printf("|==========|                                                                  |==========|\n");
    printf("|==========|     Projeto de um Sistema de Gestão para um Bar e Restaurante    |==========|\n");
    printf("|==========|                 Sistemas de Informação / UFRN                    |==========|\n");
    printf("|==========|                 Disciplina: Programação                          |==========|\n");
    printf("|==========|                 Professor: Flavius da Luz e Gorgônio             |==========|\n");
    printf("|==========|                                                                  |==========|\n");
    printf("|==========|        Projeto em desenvolvimento por:                           |==========|\n");
    printf("|==========|                                                                  |==========|\n");
    printf("|==========|                 Kaio Márcio Aaraújo Cavalcante Lira              |==========|\n");
    printf("|==========|                 E-mail: kaio.lira.080@ufrn.edu.br                |==========|\n");
    printf("|==========|                 Instagram: @kaiom.20                             |==========|\n");
    printf("|==========|                 Git: https://github.com/Kaiom20                  |==========|\n");
    printf("|==========|                                                                  |==========|\n");
    printf("|==========|                 Fillipe Medeiros Araújo Morais                   |==========|\n");
    printf("|==========|                 E-mail: fillipe.morais.095@ufrn.edu.br           |==========|\n");
    printf("|==========|                 Instagram: @fillipemdrs                          |==========|\n");
    printf("|==========|                 Git: https://github.com/fillipemdrs              |==========|\n");
    printf("|==========|                                                                  |==========|\n");
    printf("|==========|                                          -- desde Set, 2024      |==========|\n");
    printf("|========================================================================================|\n");
    printf("\n");
}
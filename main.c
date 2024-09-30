/*
|=============================================================|
|=================|     Projeto SIG-Bar     |=================|
|=============================================================|
|=====|   Sistema de Gestão para um Bar e Restaurante   |=====|
|=====|          Sistemas de Informação / UFRN          |=====|
|=====|                  Programação                    |=====|
|=====|      Alunos: Kaio Márcio e Fillipe Medeiros     |=====|
|=====|                   Versão 0.2                    |=====|
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
void cadastrar_produto(void);
void exibir_produto(void);
void alterar_produto(void);
void excluir_produto(void);
void menu_garcom(void);
void cadastrar_garcom(void);
void exibir_garcom(void);
void alterar_garcom(void);
void excluir_garcom(void);
void menu_relatorios(void);



void info(void);


// Programa Principal
int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    menu_principal();
    menu_comandas();
    cadastrar_comanda();
    exibir_comanda();
    alterar_comanda();
    excluir_comanda();
    menu_estoque();
    cadastrar_produto();
    exibir_produto();
    alterar_produto();
    excluir_produto();
    menu_garcom();
    cadastrar_garcom();
    exibir_garcom();
    alterar_garcom();
    excluir_garcom();
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
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Alterar Comanda         |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|          ID da Comanda:                    |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}


void excluir_comanda(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Excluir Comanda         |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|          ID da Comanda:                    |==========|\n");
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


void cadastrar_produto(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|        Cadastrar Produto         |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|          ID do item:                       |==========|\n");
    printf("|==========|          Nome:                             |==========|\n");
    printf("|==========|          Validade:                         |==========|\n");
    printf("|==========|          Quantidade:                       |==========|\n");
    printf("|==========|          Valor:                            |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}


void exibir_produto(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Exibir Produto          |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|          ID do Produto:                    |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}


void alterar_produto(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Alterar Produto         |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|          ID do Produto:                    |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}


void excluir_produto(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Excluir Produto         |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|          ID do Produto:                    |==========|\n");
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


void cadastrar_garcom(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|        Cadastrar Garçom          |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|          Nome:                             |==========|\n");
    printf("|==========|          Idade:                            |==========|\n");
    printf("|==========|          CPF:                              |==========|\n");
    printf("|==========|          Telefone:                         |==========|\n");
    printf("|==========|          ID do Garçom:                     |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}


void exibir_garcom(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Exibir Garçom           |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|          ID do Garçom:                     |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}


void alterar_garcom(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Alterar Garçom          |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|          ID do Garçom:                     |==========|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==================================================================|\n");
    printf("\n");
}


void excluir_garcom(void) {
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Excluir Garçom          |===============|\n");
    printf("|==================================================================|\n");
    printf("|==========|                                            |==========|\n");
    printf("|==========|          ID do Garçom:                     |==========|\n");
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
    printf("|==========|                 Kaio Márcio Araújo Cavalcante Lira               |==========|\n");
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
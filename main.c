/*
|=============================================================|
|=================|     Projeto SIG-Bar     |=================|
|=============================================================|
|=====|   Sistema de Gestão para um Bar e Restaurante   |=====|
|=====|          Sistemas de Informação / UFRN          |=====|
|=====|                  Programação                    |=====|
|=====|      Alunos: Kaio Márcio e Fillipe Medeiros     |=====|
|=====|                   Versão 0.3                    |=====|
|=============================================================|
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "comandas.h"
#include "estoque.h"
#include "garcom.h"
#include "relatorio.h"

// Assinatura das funções
char menu_principal(void);
void info(void);


// Programa Principal
int main(void) {
    
    setlocale(LC_ALL, "Portuguese_Brazil");
    char opcao;
    
    do {
            opcao = menu_principal();
            
            switch(opcao) {

                case '1':       modulo_comanda();
                                    break;

                case '2':       modulo_estoque();
                                    break;

                case '3':       modulo_garcom();
                                    break;

                case '4':       modulo_relatorio();
                                    break;
                                    
                case '5':       info();
                                    break;    
            }
            
    } while (opcao != '0');

    return 0;
}


// Funções 

char menu_principal(void) {
    char opc;
    system("clear||cls");
    printf("\n");
    printf("|==================================================================|\n");
    printf("|===============|          Menu Principal          |===============|\n");
    printf("|==================================================================|\n");
    printf("|=====|                                                      |=====|\n");
    printf("|=====|                  [1] Menu Comandas                   |=====|\n");
    printf("|=====|                  [2] Menu Estoque                    |=====|\n");
    printf("|=====|                  [3] Menu Garçom                     |=====|\n");
    printf("|=====|                  [4] Menu Relatórios                 |=====|\n");
    printf("|=====|                  [5] Informações                     |=====|\n");
    printf("|=====|                  [0] Sair                            |=====|\n");
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


void info(void) {
    system("clear||cls");
    printf("\n");
    printf("|========================================================================================|\n");
    printf("|==================|                    Informações                   |==================|\n");
    printf("|========================================================================================|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|           rojeto de um Sistema de Gestão para um Bar e Restaurante         |=====|\n");
    printf("|=====|                      Sistemas de Informação / UFRN                         |=====|\n");
    printf("|=====|                      Disciplina: Programação                               |=====|\n");
    printf("|=====|                      Professor: Flavius da Luz e Gorgônio                  |=====|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|             Projeto em desenvolvimento por:                                |=====|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|                    Kaio Márcio Araújo Cavalcante Lira                      |=====|\n");
    printf("|=====|                    E-mail: kaio.lira.080@ufrn.edu.br                       |=====|\n");
    printf("|=====|                    Instagram: @kaiom.20                                    |=====|\n");
    printf("|=====|                    Git: https://github.com/Kaiom20                         |=====|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|                    Fillipe Medeiros Araújo Morais                          |=====|\n");
    printf("|=====|                    E-mail: fillipe.morais.095@ufrn.edu.br                  |=====|\n");
    printf("|=====|                    Instagram: @fillipemdrs                                 |=====|\n");
    printf("|=====|                    Git: https://github.com/fillipemdrs                     |=====|\n");
    printf("|=====|                                                                            |=====|\n");
    printf("|=====|                                               -- desde Set, 2024           |=====|\n");
    printf("|========================================================================================|\n");
    printf("\n");
    printf("\t >>>  Pressione <ENTER> para continuar  <<<");
    getchar();
}
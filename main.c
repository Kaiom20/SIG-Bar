/*
|=============================================================|
|=================|     Projeto SIG-Bar     |=================|
|=============================================================|
|=====|   Sistema de Gestão para um Bar e Restaurante   |=====|
|=====|          Sistemas de Informação / UFRN          |=====|
|=====|                  Programação                    |=====|
|=====|      Alunos: Kaio Márcio, Fillipe Medeiros  e   |=====|
|=====|                   Diêgo Axel                    |=====|
|=====|                   Versão 0.8                    |=====|
|=============================================================|
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Funções das interfaces principal
#include "interfacesPrincipais/interfaces.h"

// Funções das Comandas
#include "comandas.h"

// Funcções do Estoque
#include "estoque.h"

// Funções de Garçom
#include "garcom/garcom.h"

// Funç~eos de Relatórios
#include "relatorio.h"


// Programa Principal
int main(void) {
    
    setlocale(LC_ALL, "Portuguese_Brazil");
    char opcao;
    
    do {
        opcao = menu_principal();
        
        switch(opcao) {
            case '1': modulo_comanda();
                        break;
            case '2': modulo_estoque();
                        break;
            case '3': modulo_garcom();
                        break;
            case '4': modulo_relatorio();
                        break;                     
            case '5': info();
                        break;    
        }   

    } while (opcao != '0');

    return 0;
}
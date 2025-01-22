#include <stdio.h> 
#include <string.h>
#include "moduloE.h"
#include "estoque.h"

// Função do móudlo de estoque

void modulo_estoque(void){
    char opcao;
    do {
        opcao = menu_estoque();
        switch(opcao){
            case '1': cadastrar_produto();
                        break;
            case '2': exibir_produto();
                        break;
            case '3': alterar_produto();
                        break;
            case '4': excluir_produto();
                        break;
        }
    } while (opcao != '0');
}
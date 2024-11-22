#include <stdio.h>
#include "moduloC.h"
#include "comandas.h"

//Função do módulo comandas

void modulo_comanda(void){
    char opcao;
    do {
        opcao = menu_comandas();
        switch(opcao){
            case '1': cadastrar_comanda();
                        break;
            case '2': exibir_comanda();
                        break;
            case '3': alterar_comanda();
                        break;
            case '4': excluir_comanda();
                        break;
        }
    } while (opcao != '0');
}
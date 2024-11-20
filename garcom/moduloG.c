#include <stdio.h>
#include "moduloG.h"
#include "garcom.h"

// Função do módulo garçom

void modulo_garcom(void) {
    
    char opcao;

    do {
        opcao = menu_garcom();

        switch(opcao) {
            case '1': cadastrar_garcom();
                        break;                      
            case '2': exibir_garcom();
                        break;
            case '3': alterar_garcom();
                        break;
            case '4': excluir_garcom();
                        break;
        }

    } while (opcao != '0');
}
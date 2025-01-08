#include <stdio.h>
#include "moduloR.h"
#include "relatorio.h"
#include "relComandas.h"
#include "relEstoque.h"
#include "relEstoque.h"

void modulo_relatorio(void) {

    char opcao;

    do {
        opcao = menu_relatorios();

        switch(opcao) {
            case '1': relatorio_comandas();
                        break;              
            case '2': relatorio_estoque();
                        break;
            case '3': relatorio_garcom();
                        break;
        }

    } while (opcao != '0');
}
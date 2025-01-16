#include <stdio.h>
#include "moduloR.h"
#include "relatorio.h"
#include "relComandas.h"
#include "relEstoque.h"
#include "relGarcom.h"

void modulo_relatorio(void) {

    char opcao;

    do {
        opcao = menu_relatorios();

        switch(opcao) {
            case '1': relatorio_comandas();
                        break;              
            case '2': menu_relEstoque();
                        break;
            case '3': modulo_relGarcom();
                        break;
        }

    } while (opcao != '0');
}
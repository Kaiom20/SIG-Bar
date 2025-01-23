#include <stdio.h>
#include <string.h>
#include "moduloR.h"
#include "relatorio.h"
#include "relComandas.h"
#include "relGarcom.h"
#include "relatorio_estoque.h"

void modulo_relatorio(void) {
    char opcao;

    do {
        opcao = menu_relatorios();

        switch(opcao) {
            case '1': relatorio_comanda();
                      break;
            case '2': relatorio_estoque();
                      break;
            case '3': modulo_relGarcom();
                      break;
        }

    } while (opcao != '0');
}
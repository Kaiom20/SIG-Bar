#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ler_comandas.h"
#include "../validadores/valida.h"

// Funções

void ler_idcom(char *idcomanda) {
    int verificador = 1;
    while(verificador == 1) {
        printf("|=====|               ID da Comanda: ");
        scanf("%[0-9]", idcomanda);
        getchar();
        if (validar_ID(idcomanda)) {
            verificador = 0;
        } else {
            printf("|=====|               O ID não é válido.\n");
        }
    }
}


void ler_dataCom(char *data) {
    printf("|=====|               Data (dd/mm/aaaa): ");
    scanf("%[0-9/]", data);
    getchar();
}


void ler_hora(char *hora) {
    printf("|=====|               Hora: ");
    scanf("%[0-9:]", hora);
    getchar();
}


void ler_mesa(char *mesa) {
    printf("|=====|               Mesa: ");
    scanf("%[0-9]", mesa);
    getchar();
}


void ler_idgarCom(char *idgarcom) {
    int verificador = 1;
    while(verificador == 1) {
        printf("|=====|               ID do Garçom: ");
        scanf("%[0-9]", idgarcom);
        getchar();
        if (validar_ID(idgarcom)) {
            verificador = 0;
        } else {
            printf("|=====|               O ID não é válido.\n");
        }
    }
}


void ler_valorCom(char *valor) {
    printf("|=====|               Valor: ");
    scanf("%[0-9,]", valor);
    getchar();
}
#include <stdlib.h>
#include <stdio.h>
#include "ler_comandas.h"
#include "../validadores/valida.h"

// Funções

void ler_idcom(char *idcomanda) {
    printf("|=====|               ID da Comanda: ");
    scanf("%[0-9]", idcomanda);
    getchar();
    if (validar_ID(idcomanda)) {
        printf("ID é válido.\n");
    } else {
        printf("ID é inválido.\n");
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
    printf("|=====|               ID do Garçom: ");
    scanf("%[0-9]", idgarcom);
    getchar();
}


void ler_valorCom(char *valor) {
    printf("|=====|               Valor: ");
    scanf("%[0-9,]", valor);
    getchar();
}
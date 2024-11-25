#include <stdlib.h>
#include <stdio.h>
#include "ler_comandas.h"
#include "../validadores/valida.h"

// Funções

void ler_idcom(char *idcomanda) {
    printf("|=====|               ID da Comanda: ");
    scanf("%[0-9]", idcomanda);
    getchar();
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
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
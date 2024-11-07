#include <stdlib.h>
#include <stdio.h>
#include "ler_estoque.h"


// Funções

void ler_id(char *idprod) {
    printf("|=====|               ID do Produto: ");
    scanf("%[0-9]", idprod);
}
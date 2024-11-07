#include <stdlib.h>
#include <stdio.h>
#include "ler_estoque.h"


// Funções

void ler_idprod(char *idprod) {
    printf("|=====|               ID do Produto: ");
    scanf("%[0-9]", idprod);
    getchar();
}


void ler_nomeProd(char *nome) {
    printf("|=====|               Nome: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
}
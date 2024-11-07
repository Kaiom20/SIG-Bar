#include <stdlib.h>
#include <stdio.h>
#include "ler_garcom.h"

// funções


void ler_nome(char *nome) {
    printf("|=====|         Nome: ");
    scanf("%[A-ZÁÉÍÓÚÃÕÂÊÎÔÛÀÇ a-záéíóúãõâêîôûàç]", nome);
}
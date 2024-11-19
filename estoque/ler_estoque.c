#include <stdlib.h>
#include <stdio.h>
#include "ler_estoque.h"
#include "../validadores/valida.h"


// Funções

void ler_idprod(char *idprod) {
    printf("|=====|               ID do Produto: ");
    scanf("%[0-9]", idprod);
    getchar();
}


void ler_nomeProd(char *nome) {
    int verificador = 1;
    while(verificador == 1) {
        printf("|=====|               Nome: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
        getchar();
        if(valida_nome(nome) == 1) {
            verificador = 0;
        } else {
            printf("|=====|         O nome não é válido!\n");
            printf("|=====|         Tente novamente!\n");
            printf("|=====|\n");
            getchar();
        }
    }
    
}


void ler_validade(char *valid) {
    printf("|=====|               Validade (dd/mm/aaaa): ");
    scanf("%[0-9/]", valid);
    getchar();
}


void ler_quanti(char *quant) {
    printf("|=====|               Quantidade: ");
    scanf("%[0-9]", quant);
    getchar();
}


void ler_valor(char *valor) {
    printf("|=====|               Valor: ");
    scanf("%[0-9,]", valor);
    getchar();
}
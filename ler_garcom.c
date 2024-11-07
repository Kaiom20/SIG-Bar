#include <stdlib.h>
#include <stdio.h>
#include "ler_garcom.h"
#include "valida.h"

// funções


void ler_nome(char * nome){
    int verificador = 1;
    while (verificador == 1){
        printf("|=====|         Nome: ");
        scanf("%[A-ZÁÉÍÓÚÃÕÂÊÎÔÛÀÇ a-záéíóúãõâêîôûàç]", nome);
        getchar();
        if(valida_nome(nome) == 1){
            printf("|=====|         O nome é válido!\n");
            verificador = 0;
        } else{
            printf("|=====|         O nome não é válido!\n");
            printf("|=====|         Tente novamente!\n");
            printf("|=====|\n");
            getchar();
        }
    }
}


void ler_nasc(char * nasc) {
    printf("|=====|         Data de nascimento: ");
    scanf("%[0-9/]", nasc);
}

void ler_cpf(char * cpf){
    printf("|=====|         CPF: ");
    scanf("%[0-9.-]", cpf);
}

void ler_fone(char * telefone){
    printf("|=====|         Telefone: ");
    scanf("%[0-9()-]", telefone);
}

void ler_idgar(char * id_garcom){
    printf("|=====|         ID do Garçom: ");
    scanf("%[0-9]", id_garcom);
}
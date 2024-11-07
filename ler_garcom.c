#include <stdlib.h>
#include <stdio.h>
#include "ler_garcom.h"

// funções


void ler_nome(char * nome) {
    printf("|=====|         Nome: ");
    scanf("%[A-ZÁÉÍÓÚÃÕÂÊÎÔÛÀÇ a-záéíóúãõâêîôûàç]", nome);
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

void ler_id(char * id_garcom){
    printf("|=====|         ID do Garçom: ");
    scanf("%[0-9]", id_garcom);
}
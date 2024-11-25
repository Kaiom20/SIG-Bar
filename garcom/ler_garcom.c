#include <stdlib.h>
#include <stdio.h>
#include "ler_garcom.h"
#include "../validadores/valida.h"

// funções

void ler_nome(char * nome){
    int verificador = 1;
    while (verificador == 1){
        printf("|=====|         Nome: ");
        scanf("%[A-ZÁÉÍÓÚÃÕÂÊÎÔÛÀÇ a-záéíóúãõâêîôûàç]", nome);
        getchar();
        if(valida_nome(nome) == 1){
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
    getchar();
}

void ler_cpf(char * cpf){
    int verificador = 1;
    while (verificador == 1){
        printf("|=====|         CPF: ");
        scanf("%[0-9.-]", cpf);
        getchar();
        if(validarCPF(cpf) == 1){
            verificador = 0;
        } else{
            printf("|=====|         O CPF não é válido!\n");
            printf("|=====|         Pressione ENTER!");
            getchar();
        }
    }
}

void ler_fone(char * telefone){
    int verificador = 1;
    while (verificador == 1){
        printf("|=====|         Telefone (SÓ NÚMEROS): ");
        scanf("%[0-9()-]", telefone);
        getchar();
        if(valida_fone(telefone) == 1){
            verificador = 0;
        } else{
            printf("|=====|         O telefone não é válido!\n");
            printf("|=====|         Pressione ENTER!");
            getchar();
        }
    }
}

void ler_idgar(char * id_garcom){
        int verificador = 1;
    while(verificador == 1) {
        printf("|=====|               ID do Garçom: ");
        scanf("%[0-9]", id_garcom);
        getchar();
        if (validar_ID(id_garcom)) {
            verificador = 0;
        } else {
            printf("|=====|               O ID não é válido.\n");
        }
    }
}
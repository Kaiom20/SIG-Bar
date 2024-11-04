#include<stdio.h>
#include<ctype.h>
#include<string.h>

//Validação de telefones
int valida_fone(char * fone){
    
    int tamanho = strlen(fone);

    if (tamanho != 11){
        return 0;
    }

    for (int i = 0; i < tamanho; i++){
        if(!isdigit(fone[i])){
            return 0;
        }
    }

    return 1;
}

//Validação de nomes
int valida_nome(char * nome){
    
    int tamanho = strlen(nome);

    for (int i = 0; i < tamanho; i++){
        if(!isalpha(nome[i]) && nome[i] != ' '){
            return 0;
        }
    }

    return 1;
}

//Validação de CPF (Créditos: ChatGPT)
int digitos_iguais(char * cpf) {
    for (int i = 1; i < 11; i++) {
        if (cpf[i] != cpf[0]) {
            return 0;
        }
    }
    return 1;
}

int valida_CPF(char * cpf) {

    if (strlen(cpf) != 11) {
        return 0;
    }
    
    for (int i = 0; i < 11; i++) {
        if (!isdigit(cpf[i])) {
            return 0;
        }
    }
    if (digitos_iguais(cpf)) {
        return 0;
    }

    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i);
    }
    int primeiroDigitoVerificador = (soma * 10) % 11;
    if (primeiroDigitoVerificador == 10) {
        primeiroDigitoVerificador = 0;
    }
    if (primeiroDigitoVerificador != (cpf[9] - '0')) {
        return 0;
    }

    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }
    int segundoDigitoVerificador = (soma * 10) % 11;
    if (segundoDigitoVerificador == 10) {
        segundoDigitoVerificador = 0;
    }
    if (segundoDigitoVerificador != (cpf[10] - '0')) {
        return 0; 
    }

    return 1;
}


char valida_data(void) {

    int verificador = 1;

    do {
        
    } while (verificador == 1);
    
}
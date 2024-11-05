#include<stdio.h>
#include<stdlib.h>
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

// Validação de data e ano bissexto(Créditos: André Leandro: https://github.com/andrewszada)
int bissexto(char year[]) {
    int ano = atoi(year); // para lidar com ela como se fosse um inteiro 
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
    }
    return 0;
}


int dia_mes(int mes) {
    int dias_por_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return dias_por_mes[mes];
}


int validar_data(char day[], char month[], char year[]){
    int dia = atoi(day);
    int mês = atoi(month);
    if (mês < 1 || mês > 12) {
        return 0; // limitação de meses
    }
    int maior_dia = dia_mes(mês);

    if (mês == 2) { // quando for fevereiro
        if (bissexto(year)) {
            maior_dia = 29;
        } else {
            maior_dia = 28;
        }
    }
    return dia <= maior_dia;
}
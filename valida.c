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

//Validação de CPF (Créditos: Samuel Morais/SIG-Beer: https://github.com/SamuelMorais45)
int validarFormatoCPF(const char *cpf) {
 
    if (strlen(cpf) != 14) return 0;
    for (int i = 0; i < 14; i++) {
        if ((i == 3 || i == 7) && cpf[i] != '.') return 0;    
        if (i == 11 && cpf[i] != '-') return 0;               
        if ((i != 3 && i != 7 && i != 11) && !isdigit(cpf[i])) return 0; 
    }
   
    return 1;
}


int validarDigitosCPF(const char *cpf) {
    int soma = 0, resto;
    int numeros[11];
   
    
    int j = 0;
    for (int i = 0; i < 14; i++) {
        if (isdigit(cpf[i])) {
            numeros[j] = cpf[i] - '0';
            j++;
        }
    }

   
    for (int i = 0; i < 9; i++) {
        soma += numeros[i] * (10 - i);
    }
    resto = (soma * 10) % 11;
    if (resto == 10) resto = 0;
    if (resto != numeros[9]) return 0;

 
    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += numeros[i] * (11 - i);
    }
    resto = (soma * 10) % 11;
    if (resto == 10) resto = 0;
    if (resto != numeros[10]) return 0;

    return 1;
}

int validarCPF(const char *cpf) {
    if (!validarFormatoCPF(cpf)) {
        return 0;
    }
   
    if (!validarDigitosCPF(cpf)) {
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
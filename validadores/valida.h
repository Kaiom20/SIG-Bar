//Assinatura das funções de validação

#include <stdbool.h>

#ifndef VALIDA
#define VALIDA

int valida_fone(char*);
int valida_nome(char*);
int validarFormatoCPF(const char*);
int validarDigitosCPF(const char*);
int validarCPF(const char*);
int bissexto(char year[]);
int dia_mes(int mes);
int validar_data(char day[], char month[], char year[]);
bool validar_ID(char* id);

#endif
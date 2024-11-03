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

// Assinatura das funções de garçom

#ifndef GARCOM
#define GARCOM

typedef struct garcom Garcom;

struct garcom {
    char nome[52];
    char nasc[12];
    char cpf[16];
    char telefone[16];
    char id_garcom[4];
    char status;
};

typedef struct lista Lista;

struct lista {
    Garcom* garcom;
    Lista* prox;
};

char menu_garcom(void);
void cadastrar_garcom(void);
void exibir_garcom(void);
void alterar_garcom(void);
void excluir_garcom(void);
Garcom* preencheGarcom(void);
Garcom* buscar_garcom(void);

#endif 
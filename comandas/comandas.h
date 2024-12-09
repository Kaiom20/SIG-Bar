// Assinatura das funções de comandas

#ifndef COMANDAS
#define COMANDAS

typedef struct comanda Comanda;

struct comanda {
    char idcomanda[6];
    char data[11];
    char hora[6];
    char mesa[3];
    char idgarcom[3];
    char valor[8];
    char status;
};

char menu_comandas(void);
void cadastrar_comanda(void);
void exibir_comanda(void);
void alterar_comanda(void);
void excluir_comanda(void);
Comanda* preencheComanda(void);
Comanda* buscarComanda(void);

#endif
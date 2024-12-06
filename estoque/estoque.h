// Assinatura das funções de estoque

#ifndef ESTOQUE
#define ESTOQUE

typedef struct estoque Estoque;

struct estoque {
    char idprod[6];
    char nome[35];
    char valid[11];
    char quant[5];
    char valor[8];
    char status;
};

char menu_estoque(void);
void cadastrar_produto(void);
void exibir_produto(void);
void alterar_produto(void);
void excluir_produto(void);
Estoque* preencheEstoque(void);
Estoque* buscar_produto(void);

#endif
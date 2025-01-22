// Assinatura das funções do relatório do garçom

#ifndef RELGARCOM
#define RELGARCOM
#include "../garcom/garcom.h"

void modulo_relGarcom(void);
char menu_relGarcom(void);
void relGarcom_geral(void);
void relGarcom_ativos(void);
void relGarcom_inativos(void);
Lista* lista_ordenada(void);
void imprime_lista(Lista* l);
void limpa_lista(Lista* l)

#endif
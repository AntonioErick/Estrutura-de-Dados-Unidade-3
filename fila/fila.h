#include <stdio.h>
#include <stdlib.h>

typedef struct _fila Fila;

//arquivo: fila.h
Fila *CriaFila(int MAX_SIZE);

//arquivo fila.h
void DestruirFila(Fila **Q);

int FilaVazia(Fila *Q);

int FilaCheia(Fila *Q);

int InsereFila(Fila *Q, int elem);

int RemoverFila(Fila *Q);

int ConsultarFila(Fila *Q, int *elem);
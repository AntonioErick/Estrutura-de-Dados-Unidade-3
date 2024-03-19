#include "fila.h"

//arquivo fila.h
typedef struct _fila{
    int ini, fim;
    int qtde;//numeros de elementos da fila
    int MAX_SIZE;//tamanho maximo da fila
    int *val; //vetor dos valores
} Fila;

//arquivo: fila.c
Fila *CriaFila(int MAX_SIZE){
    Fila *Q = (Fila *) calloc(1, sizeof(Fila));
    
    Q->val = (int *) calloc(MAX_SIZE, sizeof(int));
    Q->MAX_SIZE = MAX_SIZE;
    Q->qtde = 0;
    Q->ini = Q->fim = 0;

    return Q;
}

void DestruirFila(Fila **Q){
    Fila *Qaux = *Q;
    free(Qaux->val);//desloca o vetor int
    free(Qaux);
    *Q = NULL;
}

int FilaVazia(Fila *Q){
    return (Q->qtde == 0);
}

int FilaCheia(Fila *Q){
    return (Q->qtde == Q->MAX_SIZE);
}

int InsereFila(Fila *Q, int elem){
    if(FilaCheia(Q)){
        printf ("Warning: fila está cheia\n");
        return 0;//falha na inserçao
    }
    else{
        Q->val[Q->fim] = elem;
        Q->fim = (Q->fim+1) % Q->MAX_SIZE;
        Q->qtde++;
        return 1;//sucesso na inserçao
    }
}

int RemoverFila(Fila *Q){
    if(FilaVazia(Q)){
        printf ("Warning: fila esta vazia\n");
        return 0;
    }
    else{
        Q->ini = (Q->ini+1) % Q->MAX_SIZE;
        Q->qtde--;
        return 1;
    }
}

int ConsultarFila(Fila *Q, int *elem){
    if(FilaVazia(Q)){
        printf("Warning: fila esta vazia\n");
        return 0; //falha ao consultar ila
    }
    else{
        *elem = Q->val[Q->ini];
        return 1;// sucesso ao consultar fila
    }
}

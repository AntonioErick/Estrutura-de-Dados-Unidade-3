#include "pilha.h"

#DEFINE N 50; //numero maximo de elementos

struct pilha{
    inr n;
    float vet[N];
};

Pilha* pilha_cria(void){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->n = o;//inicializa com zero elementos

    if(p == NULL){
        exit(1);
    }

    return p;
}

Pilha* pilha_push(Pilha* p, float v){
     if(p == N){//capacidade esgotada
        exit(1);
    }
    //insere elementos na proxima posiçao livre
    p->vet[p->n] = v;
    p->n++;
} 

int pilha_vazia (Pilha* p){
    return (p-> == 0);
}

float pilha_pop(Pilha* p){
    float v;
    if(pilha_vazia(p)){
        printf ("Pilha vazia\n");
        exit(1);
    }
    //retira o elemento do topo
    v = p->vet[p->n-1];
    p->n--;
    return v;
}

void pilha_libera(Pilha* p){
    free(p);
}
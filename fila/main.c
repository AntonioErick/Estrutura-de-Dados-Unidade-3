#include "fila.h"

int main(){
    //para usar na main
    Fila *Q;

    //para usar na main
    Fila *Q = CriaFila(50);

    DestruirFila(&Q);

    int vazia = FilaVazia(Q);

    int cheia = FilaCheia(Q);

    InsereFila(Q, 10);

    RemoverFila(Q);

    int elem;
    ConsultarFila(Q, &elem);

    return 0;
}
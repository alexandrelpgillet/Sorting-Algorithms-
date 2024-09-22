#ifndef HEAP_SORT_H
#define HEAP_SORT_H

#endif //HEAP_SORT_H



#include "swap.h"

void heapfy(int *V, int N , int i) {

    int pai = i;

    int filho_esquerda = (2*i)+1;
    int filho_direita = (2 * i) + 2;




    if (filho_esquerda<N && V[filho_esquerda]>V[pai])
    {
        pai = filho_esquerda;

    }

    if (filho_direita<N && V[filho_direita]>V[pai])
    {
        pai = filho_direita;
    }

    if (pai!=i)
    {
        swap(&V[i], &V[pai]);

        heapfy(V,N,pai);
    }




}

void heap_sort(int *V , int N) {

    //Build MAX Heap

    for (int i = N / 2 - 1; i >= 0; i--)
    {
        heapfy(V, N, i);
    }

    //Sort

    for (int i = N - 1; i >= 0; i--)
    {
        swap(&V[0], &V[i]);

        heapfy(V, i, 0);
    }


}


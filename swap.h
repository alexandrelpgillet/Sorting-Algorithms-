#ifndef SWAP_H
#define SWAP_H



void swap(int* X, int* Y)
{

    int aux = *X;
    *X = *Y;
    *Y = aux;

}
#endif //SWAP_H



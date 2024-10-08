//
// Created by Alexandre Laureano on 08/10/2024.
//

#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#endif //QUICK_SORT_H

#include "swap.h"
#include <stdlib.h>

int particion(int *V , int beggin , int end){

    int i = beggin - 1;
    int j;

    int pivo = V[beggin + rand()%(end - beggin +1 )];

    for(j = beggin ; j<=end ; j++) {

        if(V[j]<=pivo) {

            i++;
            swap(&V[i], &V[j]);

        }
    }

    swap(&V[j], &V[i+1]);

    return i;

}

int particion_V2(int *V , int beggin , int end) {

    int i = beggin - 1;
    int j = end+1 ;
    int X = V[beggin + rand()%(end-beggin+1)];

    while(1) {

        do {

            i++;

        }while(V[i]<X);

        do {

            j--;

        }while(V[j]>X);

        if(i<j) {

            swap(&V[i],&V[j]);
        }
        else {

            return  j;
        }

    }

}

void quicksort(int *V , int beggin , int end){

     if(beggin<end){

        int pivo = particion(V, beggin , end);
        quicksort(V , beggin , pivo-1);
        quicksort(V , pivo+1 , end);
     }
}

void quicksort_V2(int *V , int beggin , int end) {

    if(beggin<end) {

        int pivo = particion_V2(V , beggin , end);
        quicksort_V2(V , beggin , pivo);
        quicksort_V2(V , pivo+1  , end);

    }
}
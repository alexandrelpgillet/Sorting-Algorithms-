#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#endif //INSERTION_SORT_H


#include "swap.h"

void insertion_sort(int *V , int N)
{

    int num;
    int j;


    for (int i = 1; i < N; i++)
    {

        num = V[i];


        for (j = i - 1; j >= 0 && V[j] > num; j--)
        {


            V[j+1]=V[j];



        }

        V[j+1] = num;







    }
}
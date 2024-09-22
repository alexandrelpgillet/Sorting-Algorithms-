#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#endif //BUBBLE_SORT_H



#include "swap.h"

void bubble_sort(int *V , int N)
{

    int flag = 1;
    int count;
    int j;

    for (int i = 0; i < N && flag; i++)
    {

        count = 0;

        for (j = 0; j < N-1; j++)
        {

            if (V[j] > V[j + 1]) {


                swap(V + j, V + j + 1);

                count = 1;



            }
        }

        if (count == 0)
        {
            flag = 0;
        }





    }
}
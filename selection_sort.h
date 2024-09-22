#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#endif //SELECTION_SORT_H

#include "swap.h"


void selection_sort(int* V, int N)
{

    int A;
    int pos;

    for (int i = 0; i < N - 1; i++)
    {

        A = V[i];
        pos = i;

        for (int j = i + 1; j < N; j++)
        {
            if (A > V[j])
            {

                A = V[j];
                pos = j;

            }
        }

        swap(V + i, V + pos);
    }
}

#ifndef MERGE_SHORT_H
#define MERGE_SHORT_H

#endif //MERGE_SHORT_H


void merge(int* V, int begin, int mediun, int end)
{

    int size = end + 1;
    int aux[size];
    int i ;
    int j ;
    int k;


    for (i = begin , j=mediun+1, k=0 ; k<size && i<=mediun && j<=end; k++)
    {

        if (V[i] < V[j])
        {
            aux[k] = V[i];
            i++;
        }
        else
        {
            aux[k] = V[j];
            j++;
        }

    }

    while (i <= mediun)
    {
        aux[k] = V[i];
        k++;
        i++;
    }

    while (j <= end)
    {
        aux[k] = V[j];
        k++;
        j++;
    }


    for (int i = begin , k= 0 ; i < size; i++ , k ++)
    {
        V[i] = aux[k];

    }





}

void merge_sort(int* V, int begin , int end )
{

    if (begin < end)
    {

        int medium = (begin + end) / 2;

        merge_sort(V, begin, medium);
        merge_sort(V, medium + 1, end);

        merge(V, begin, medium, end);
    }



}
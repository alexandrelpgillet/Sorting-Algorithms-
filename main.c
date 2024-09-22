
#include "selection_sort.h"
#include "insertion_sort.h"
#include "bubble_sort.h "
#include "merge_sort.h"
#include "heap_sort.h"
#include "swap.h"
#include <stdio.h>

int main() {

    int V[10] = { 10,2,33,4,1000,80,713,81442,93,1130 };

    //selection_sort(V, 10);
    //insertion_sort(V, 10);
    //bubble_sort(V, 10);
    //merge_sort(V, 0, 9);
    //heap_sort(V ,10);

    

    for (int i = 0; i < 10; i++)
    {
        printf("%d|", V[i]);
    }


}
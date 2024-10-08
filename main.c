
#include "selection_sort.h"
#include "insertion_sort.h"
#include "bubble_sort.h "
#include "merge_sort.h"
#include "heap_sort.h"
#include "swap.h"
#include "quick_sort.h"
#include <stdio.h>
#include <time.h>


int main() {

    clock_t start , end;
    double cpu_time_used;


    int V[50000];

    for(int i = 0 ; i<50000; i++) {

        scanf("%d", &V[i]);
    }



    start = clock();

    //selection_sort(V, 500000);
    //insertion_sort(V, 500000);
    //bubble_sort(V, 500000);
    //merge_sort(V, 0, 499999);
    //heap_sort(V ,500000);
    //quicksort(V , 0 , 499999);
    quicksort_V2(V,0 , 49999);

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Tempo de execução: %f segundos\n", cpu_time_used);


    for (int i = 0; i < 50000; i++)
    {
        printf("%d|", V[i]);
    }


}
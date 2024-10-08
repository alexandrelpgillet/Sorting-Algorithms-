
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

    double time_selection, time_bubble , time_insertion , time_merge , time_heap, time_quick_v1 , time_quick_v2;


    int *V_selection;
    int *V_bubble;
    int *V_insertion;
    int *V_merge;
    int *V_heap;
    int *V_quick_v1;
    int *V_quick_v2;

    int A;

    V_selection = (int *) malloc(sizeof(int)*500000);
    V_bubble = (int *) malloc(sizeof(int)*500000);
    V_insertion = (int *) malloc(sizeof(int)*500000);
    V_merge = (int *) malloc(sizeof(int)*500000);
    V_heap = (int *) malloc(sizeof(int)*500000);
    V_quick_v1= (int *) malloc(sizeof(int)*500000);
    V_quick_v2 = (int *) malloc(sizeof(int)*500000);





    srand((unsigned)time(NULL));



    for(int i = 0 ; i<500000; i++) {

        A =  rand()%2147483648;

        *(V_selection+i) = A;

        *(V_insertion+i) = A;

        *(V_bubble+i) =  A;

        *(V_merge+i) =  A;

        *(V_heap+i) =  A;

        *(V_quick_v1+i) =  A;

        *(V_quick_v2+i) =  A;

        A = rand()%2;

        if(A==1){

            *(V_selection+i)*= -1;

            *(V_insertion+i) *= -1;

            *(V_bubble+i) *=  -1;

            *(V_merge+i) *=  -1;

            *(V_heap+i) *=  -1;

            *(V_quick_v1+i) *=  -1;

            *(V_quick_v2+i) *=  -1;

        }


    }



    start = clock();
    selection_sort(V_selection, 500000);
    end = clock();
    time_selection = ((double) (end - start)) / CLOCKS_PER_SEC;


    start = clock();
    insertion_sort(V_insertion, 500000);
    end = clock();
    time_insertion = ((double) (end - start)) / CLOCKS_PER_SEC;;

    start = clock();
    bubble_sort(V_bubble, 500000);
    end = clock();
    time_bubble = ((double) (end - start)) / CLOCKS_PER_SEC;

    start = clock();
    merge_sort(V_merge, 0, 499999);
    end = clock();
    time_merge = ((double) (end - start)) / CLOCKS_PER_SEC;

    start = clock();
    heap_sort(V_heap ,500000);
    end = clock();
    time_heap = ((double) (end - start)) / CLOCKS_PER_SEC;

    start = clock();
    quicksort(V_quick_v1 , 0 , 499999);
    end = clock();
    time_quick_v1 = ((double) (end - start)) / CLOCKS_PER_SEC;

    start = clock();
    quicksort_V2(V_quick_v2,0 , 499999);
    end = clock();
    time_quick_v2 = ((double) (end - start)) / CLOCKS_PER_SEC;



    printf("--TEMPO DE EXECUÇÃO DOS ALGORITMOS--\n");
    printf("1)Selection sort : %lf\n" ,time_selection);
    printf("2)Insertion sort : %lf\n" ,time_insertion);
    printf("3)Bubble sort : %lf\n" ,time_bubble);
    printf("4)Merge sort: %lf\n" , time_merge );
    printf("5)Heap sort : %lf\n" , time_heap);
    printf("6)Quick sort V1 : %lf\n" , time_quick_v1);
    printf("7)Quick sort V2 : %lf\n" , time_quick_v2);










}
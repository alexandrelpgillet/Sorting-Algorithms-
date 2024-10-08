cmake_minimum_required(VERSION 3.28)
project(Sorting_Algorithms_ C)

set(CMAKE_C_STANDARD 23)

add_executable(Sorting_Algorithms_ main.c
        merge_sort.h
        selection_sort.h
        swap.h
        insertion_sort.h
        heap_sort.h
        bubble_sort.h
        quick_sort.h)

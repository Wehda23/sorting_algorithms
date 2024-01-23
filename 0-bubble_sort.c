#include <stdio.h>
#include "sort.h"


/**
 * swap - function used to swap two values inside an array
 * first: First integer value
 * second: Second integer value
 * Returns: Nothing.
 */
void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

/**
 * bubble_sort - function that applies bubble sort algorithm.
 * array: Array to apply the algorithm on
 * size: size of the inserted array.
 * Returns: Nothing.
 */
void bubble_sort(int *array, size_t size){
    /* Was estated that only sort array of size > 2*/
    if (size > 2)
    {

    }
}
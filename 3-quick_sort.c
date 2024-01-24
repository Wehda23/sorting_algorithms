#include <stdio.h>
#include "sort.h"



/**
 * swap - function used to swap two values inside an array
 * @first: First integer value
 * @second: Second integer value
 * Returns: Nothing.
 */
void swap(int *first, int *second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}


/**
 * partition - function that implements partition
 * @arr: Array of integers to apply algorithm to
 * @low: Lower size
 * @high: higher size
 * @size: size of the array
 * Returns: Nothing.
 */
size_t partition(int *arr, size_t low, size_t high, size_t size) {
    int pivot = arr[high];
    size_t i = low - 1, j;

    for (j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    print_array(arr, size);
    return i + 1;
}

/**
 * quick_sort_helper - function that implements Quick Sort Algorithm
 * @arr: Array of integers to apply algorithm to
 * @low: Lower size
 * @high: higher size
 * @size: size of the array
 * Returns: Nothing.
 */
void quick_sort_helper(int *arr, size_t low, size_t high, size_t size)
{
    size_t pivot_index;

    if (low < high)
    {
        pivot_index = partition(arr, low, high, size);

        if (pivot_index > 0)
        {
            quick_sort_helper(arr, low, pivot_index - 1, size);
        }

        quick_sort_helper(arr, pivot_index + 1, high, size);
    }
}

/**
 * quick_sort - function that implements Quick Sort Algorithm
 * @array: Array to apply the algorithm to 
 * @size: Size of the array
 * Returns: Nothing.
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
    {
        return;
    }

    quick_sort_helper(array, 0, size - 1, size);
}
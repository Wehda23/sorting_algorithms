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
 * bubble_sort - function that applies bubble sort algorithm.
 * @array: Array to apply the algorithm on
 * @size: size of the inserted array.
 * Returns: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	if (size < 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
				print_array(array, size);
			}
		}

		if (!swapped)
			break;
	}
}

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
 * selection_sort - function that applies selection sort algorithm.
 * @array: Array to apply the algorithm on
 * @size: size of the inserted array.
 * Returns: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t current = 0;
	size_t index = 0;
	int smallest = array[0], smallest_index = 0;
	int change = 0;

	if (size > 2)
	{
		while (current < size)
		{

			if (array[index] < smallest)
			{
				smallest = array[index];
				smallest_index = index;
				change = 1;
			}
			/* Reached the end of the array */
			if (index == size - 1)
			{
				/* swap */
				swap(&array[current], &array[smallest_index]);
				/* Increment current */
				current++;
				/* restate index */
				index = current;
				/* Restate smallest_index and smallest value */
				smallest_index = current;
				smallest = array[current];
				if (change == 1)
					print_array(array, size);
				change = 0;
			}
			else
				index++;
		}
	}

}

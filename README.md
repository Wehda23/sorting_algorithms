# Sorting Algorithms By Waheed Khaled (ALX Tuition)

## Sorting Algorithms:

1. Bubble Sort. (Mandatory)

2. Insertion Sort. (Mandatory)

3. Selection Sort. (Mandatory)

4. Quick Sort. (Mandatory)

5. Shell Sort - Knuth Sequence. (Advanced)

6. Cocktail Shaker Sort. (Advanced)

7. Counting Sort. (Advanced)

8. Merge Sort. (Advanced)

9. Heap Sort. (Advanced)

10. Radix Sort. (Advanced)

11. Bitonic Sort. (Advanced)

12. Quick Sort - Hoare Partition Scheme (Advanced)

13. Dealer (Advanced)

## Bubble Sort.

Prototype in C Programming Language in sort.h:

```c
void bubble_sort(int *array, size_t size);
```

Function in file:

```bash
0-bubble_sort.c
```

Test File 0-main.c:

```c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
```

Compile command:

```bash
gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
```

## Insertion Sort.

Prototype in C Programming Language in sort.h:

```c
void insertion_sort_list(listint_t **list);
```

Function in file:

```bash
1-insertion_sort_list.c
```

Test File 1-main.c:

```c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
    insertion_sort_list(&list);
    printf("\n");
    print_list(list);
    return (0);
}
```

Compile command:

```bash
gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
```

## Selection Sort.

Prototype in C Programming Language in sort.h:

```c
void selection_sort(int *array, size_t size);
```

Function in file:

```bash
2-selection_sort.c
```

Test File 2-main.c:

```c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    selection_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
```

Compile command:

```bash
gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 2-main.c 2-selection_sort.c print_array.c -o select
```

## Quick Sort.

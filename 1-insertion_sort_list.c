#include <stdio.h>
#include "sort.h"



/**
 * insertion_sort_list - function that applies insertion sort algorithm.
 * @list: Head of a doubly-linked list
 * Returns: Nothing.
 */
void insertion_sort_list(listint_t **list){
    listint_t *temp, *current;

    /* Avoid unnecessary actions */
    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;
    current = (*list)->next;
    /* While condition should be until current Node is NULL */
    while (current != NULL) {
        temp = current->prev;
        while (temp != NULL && temp->n > current->n) {
            /* Swap the current node with its previous node */
            if (current->next != NULL)
                current->next->prev = temp;
            temp->next = current->next;
            current->prev = temp->prev;
            current->next = temp;
            if (temp->prev != NULL)
                temp->prev->next = current;
            else
                *list = current;
            temp->prev = current;
            /* Move to the next insertion point */
            temp = current->prev;
            print_list(*list);
        }
        /* Move to the next node in the list */
        current = current->next;
    }
}
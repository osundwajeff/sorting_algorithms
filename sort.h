#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* print array and list prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Bubble sort */
void bubble_sort(int *array, size_t size);

/* insertion sort */
void insertion_sort_list(listint_t **list);

/* selection sort */
void selection_sort(int *array, size_t size);

/* quick sort */
void quick_sort(int *array, size_t size);

/* Shell sort - Knuth Sequence */
void shell_sort(int *array, size_t size);

#endif /* sort.h */

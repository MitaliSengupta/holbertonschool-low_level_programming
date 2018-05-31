#ifndef _SORT_H_
#define _SORT_H_

#include <stdlib.h>
#include <stdio.h>
#define NUM 10

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


void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
size_t partition(int *array, size_t start, size_t pivot, size_t size);
void sort(int *array, size_t start, size_t end, size_t size);
void swap(int *a, int *b);
void merge_sort(int *array, size_t size);
void merge_rec(int *array, int *tmp, size_t left, size_t right);
void print(int *array, char *order, size_t left, size_t right);
void heap_sort(int *array, size_t size);
void heap(int *array, size_t size, size_t last);
void child(int *array, size_t size, size_t last, size_t max);
void max_heap(int *array, size_t size);
void swap_heap(int *array, size_t a, size_t b);
void counting_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void csort(int *array, size_t size, int div);
void shell_sort(int *array, size_t size);

#endif

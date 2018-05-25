#include "sort.h"

/**
 * insertion_sort_list - function to sort doubly linked list in ascending order
 * @list: doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr_sort = NULL;

	if (list == NULL || *list == NULL)
		return;

	curr_sort = (*list)->next;

	for (; curr_sort != NULL; curr_sort = curr_sort->next)
	{
		while (curr_sort->prev != NULL &&
		       curr_sort->n < curr_sort->prev->n)
		{
			curr_sort->prev->next = curr_sort->next;

			if (curr_sort->next != NULL)
				curr_sort->next->prev = curr_sort->prev;
			curr_sort->next = curr_sort->prev;
			curr_sort->prev = curr_sort->prev->prev;
			curr_sort->next->prev = curr_sort;

			if (curr_sort->prev == NULL)
				*list = curr_sort;
			else
				curr_sort->prev->next = curr_sort;
			print_list(*list);
		}
	}
}

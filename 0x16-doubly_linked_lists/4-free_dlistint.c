#include "lists.h"

/**
 * free_dlistint - free list
 * @head: ptr to the beginning of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed;

	for (; head != NULL;)
	{
		freed = head->next;
		free(head);
		head = freed;
	}
}

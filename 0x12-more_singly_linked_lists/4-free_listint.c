#include "lists.h"

/**
 * free_listint - function to free list
 * @head: pointer to the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *freed;

	while (head != NULL)
	{
		freed = head;
		head = head->next;
		free(freed);
	}
}

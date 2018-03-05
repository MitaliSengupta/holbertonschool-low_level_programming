#include "lists.h"

/**
 * free_listint2 - function to free list
 * @head: pointer to the pointer of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *freed;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		freed = *head;
		*head = (*(head))->next;
		free(freed);
	}
	*head = NULL;
}

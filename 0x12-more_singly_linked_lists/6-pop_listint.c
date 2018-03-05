#include "lists.h"

/**
 * pop_listint - function to remove the head node of a list
 * @head: pointer to the pointer of the list
 * Return: the value stored in the head node or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int n;

	if (*head != NULL)
	{
		pop = *head;
		*head = (*(head))->next;
		n = pop->n;
		free(pop);
		return (n);
	}
	return (0);
}

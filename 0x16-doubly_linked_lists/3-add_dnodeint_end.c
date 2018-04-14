#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of  the list
 * @head: double ptr to the head of the list
 * @n: data
 * Return: address to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *old;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	old = *head;

	for (; old->next != NULL;)
	{
		old = old->next;
	}
	old->next = new;
	new->prev = old;
	return (new);
}

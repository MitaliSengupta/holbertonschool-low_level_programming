#include "lists.h"

/**
 * add_nodeint_end - function to add new node at the end of the list
 * @head: pointer to the pointer to list
 * @n: data to add
 * Return: the address of the added element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else if ((*head)->next == NULL)
		(*head)->next = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);
}

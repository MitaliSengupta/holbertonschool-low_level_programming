#include "lists.h"

/**
 * add_nodeint - function to add node at the beginning of list
 * @head: pointer to the pointer of the list
 * @n: data to copy
 * Return: pointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - function to get node at given index
 * @head: pointer to the beginning of the list
 * @index: index to get the node at
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
		return (NULL);

	for (a = 0; head != NULL && a < index; a++)
	{
		head = head->next;
	}
	return (head);
}

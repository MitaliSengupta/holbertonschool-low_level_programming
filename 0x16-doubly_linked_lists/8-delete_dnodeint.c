#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index
 * @head: ptr to the begining of the list
 * @index: index to be deleted
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *old;
	unsigned int a;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		old = *head;
		*head = old->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(old);
		return (1);
	}

	old = *head;

	for (a = 0; old != NULL && a < index; a++)
		old = old->next;
	if (old == NULL)
		return (-1);
	old->prev->next = old->next;

	if (old->next != NULL)
		old->next->prev = old->prev;
	free(old);
	return (1);
}

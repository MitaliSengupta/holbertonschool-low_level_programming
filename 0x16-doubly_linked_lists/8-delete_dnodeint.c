#include "lists.h"

/**
 *
 *
 *
 *
 *
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

	for (a = 0; head != NULL && a < index; a++)
		old = old->next;
	if (old == NULL)
		return (-1);
	old->prev->next = old->next;

	if (old->next != NULL)
		old->next->prev = old->prev;
	free(old);
	return (1);
}

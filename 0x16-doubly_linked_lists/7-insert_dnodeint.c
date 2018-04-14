#include "lists.h"

/**
 * insert_dnodeint_at_index - func to insert node at index
 * @h: double ptr to the beginning of the list
 * @idx: index at which to add
 * @n: data to be added
 * Return: address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *old;
	unsigned int a;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	old = *h;

	for (a = 0; old != NULL && a < idx; a++)
		old = old->next;

	if (old == NULL && a == idx)
		return (add_dnodeint_end(h, n));

	else if (old != NULL)
	{
		new = malloc(sizeof(dlistint_t));

		if (new == NULL)
			return (NULL);
		new->n = n;
		old->prev->next = new;
		new->prev = old->prev;
		old->prev = new;
		new->next = old;

		return (new);
	}
	return (NULL);
}

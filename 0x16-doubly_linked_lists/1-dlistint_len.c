#include "lists.h"

/**
 *
 *
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
		h = h->next;

	return (a);
}

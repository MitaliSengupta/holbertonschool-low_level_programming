#include "lists.h"

/**
 *
 *
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed;

	for(; head != NULL;)
	{
		freed = head->next;
		free(head);
		head = freed;
	}
}

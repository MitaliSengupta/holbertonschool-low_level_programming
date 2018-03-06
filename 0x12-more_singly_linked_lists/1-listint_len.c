#include "lists.h"

/**
 * listint_len - function to print the number of nodes
 * @h: pointer to the list
 * Return: the count of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

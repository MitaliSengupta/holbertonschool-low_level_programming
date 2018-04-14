#include "lists.h"

/**
 * sum_dlistint - add all elements of a list
 * @head: ptr to the beginning of the list
 * Return: sum of the elements
 */
int sum_dlistint(dlistint_t *head)
{
	int total;

	for (total = 0; head != NULL; head = head->next)
		total = total + head->n;
	return (total);
}

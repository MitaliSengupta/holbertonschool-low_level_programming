#include "lists.h"

/**
 * free_listint_safe - function to free list
 * @h: pointer to the pointer of the list
 * Return: count
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count_new = 0, count_comp = 0;
	listint_t *tmp, *head, *comp;

	if (h == NULL)
		return (0);
	head = comp = tmp = *h;
	while (head != NULL)
	{
		comp = *h;
		while (count_new > count_comp)
		{
			if (tmp == comp)
			{
				*h = NULL;
				return (count_new);
			}
			count_comp++;
			comp = comp->next;
		}
		count_comp = 0;
		count_new++;
		tmp = head->next;
		free(head);
		head = tmp;
	}
	count_new = 0;
	*h = NULL;
	return (count_new);
}

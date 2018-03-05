#include "lists.h"

/**
 * get_nodeint_at_index - function to find nth node in a list
 * @head: the pointer to the list
 * @index: the node to find
 * Return: n or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *find;
	unsigned int a = 0;

	if (head != NULL)
	{
		find = head;
		while (find != NULL)
		{
			if (a == index)
				return (find);
			find = find->next;
			a++;
		}
	}
	return (NULL);
}

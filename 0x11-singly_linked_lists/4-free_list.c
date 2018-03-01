#include "lists.h"

/**
 * free_list - function that frees list
 * @head: pointer to the beginning of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *free_it;

	while (head != NULL)
	{
		free_it = head;
		head = head->next;
		free(free_it->str);
		free(free_it);
	}
	head = NULL;
}

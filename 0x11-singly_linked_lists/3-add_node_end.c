#include "lists.h"

/**
 * add_node_end - add new node to the end of list_t
 * @head: pointer to the pointer of beginning of list_t
 * @str: string to be added
 * Return: New node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *current;
	int a;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	if (*head == NULL)
		*head = add;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = add;
	}
	add->next = NULL;
	add->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		;
	add->len = a;
	return (add);
}

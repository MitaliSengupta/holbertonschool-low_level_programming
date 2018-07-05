#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node at the left
 * @parent: input parent node
 * @value: input value
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_c;

	if (parent == NULL)
		return (NULL);
	left_c = malloc(sizeof(binary_tree_t));
	if (left_c == NULL)
		return (NULL);
	left_c->n = value;
	left_c->parent = parent;
	left_c->left = NULL;
	left_c->right = NULL;

	if (parent->left == NULL)
		parent->left = left_c;
	else
	{
		left_c->left = parent->left;
		parent->left->parent = left_c;
		parent->left = left_c;
	}
	return (left_c);
}

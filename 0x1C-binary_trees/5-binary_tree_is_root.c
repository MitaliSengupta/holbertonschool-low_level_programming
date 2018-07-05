#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is root
 * @node: input node
 * Return: returns 1 for root or 0
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (1);
	return (0);
}

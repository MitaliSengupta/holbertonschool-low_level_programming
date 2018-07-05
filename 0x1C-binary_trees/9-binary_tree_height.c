#include "binary_trees.h"

/**
 * binary_tree_height - checks for the height of a node
 * @tree: input tree
 * Return: height
 *
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	l = binary_tree_height(tree->left) + 1;
	r = binary_tree_height(tree->right) + 1;
	if (r > l)
		return (r);
	return (l);
}

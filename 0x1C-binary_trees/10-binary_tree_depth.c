#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_depth - checks for the depth of a ndoe
 * @tree: input tree
 * Return: depth
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int num;

	if (tree == NULL)
		return (0);
	for (num = 0; tree && tree->parent; num++)
		tree = tree->parent;
	return (num);
}

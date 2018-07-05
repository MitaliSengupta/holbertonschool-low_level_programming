#include "binary_trees.h"

/**
 * binary_tree_balance - checks for balance factor
 * @tree: input tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lt, rt;

	if (tree == NULL)
		return (0);
	lt = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	rt = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (lt - rt);
}

/**
 * binary_tree_height - function that calculates the height
 * @tree: input tree
 * Return: return value
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (right > left)
		return (right);
	return (left);
}

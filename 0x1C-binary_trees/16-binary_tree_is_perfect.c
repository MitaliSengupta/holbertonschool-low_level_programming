#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function to check if a binary tree is perfect
 * @tree: pointer to the rood node of tree to check
 * Return: Null = 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t nodes, n;

	if (!tree)
		return (0);
	for (n = 0, nodes = 1; n <= binary_tree_height(tree); n++)
		nodes = nodes * 2;
	return (binary_tree_size(tree) + 1 == nodes);
}

/**
 * binary_tree_height - function to calculate height of tree
 * @tree: tree root
 * Return: height of tree else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_size - function to calculate the size
 * @tree: tree root
 * Return: size of tree else 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
}

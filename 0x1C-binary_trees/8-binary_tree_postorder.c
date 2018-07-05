#include "binary_trees.h"

/**
 * binary_tree_postorder - prints tree in postorder
 * @tree: input tree
 * @func: input function
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

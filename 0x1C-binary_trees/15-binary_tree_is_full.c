#include "binary_trees.h"
/**
 *
 *
 *
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
	{
		if (binary_tree_is_full(tree->right) != 1)
			return (0);
		if (binary_tree_is_full(tree->left) != 1)
			return (0);
	}
	if ((tree->left && tree->right == NULL) || (tree->left == NULL && tree->right))
		return (0);
	return (1);
}

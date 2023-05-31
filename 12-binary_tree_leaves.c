#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the leaves of a binary tree
 *
 * @tree: character to print
 *
 *
 * Return: 0 success
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	s = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (s);
}

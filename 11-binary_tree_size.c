#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: character to print
 *
 *
 * Return: 0 success
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);

	s = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);

	return (s);
}

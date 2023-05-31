#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the nodes of a binary tree
 *
 * @tree: character to print
 *
 *
 * Return: 0 success
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);
	if (tree->left  || tree->right)
		s = binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right);
	return (s);
}

#include "binary_trees.h"

/**
 *  binary_tree_is_root - checks if a node is a root
 *
 * @node: character to print
 *
 * Return: 0 success
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	if (node->left && node->right)
		return (1);
	return (0);
}

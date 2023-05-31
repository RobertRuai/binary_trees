#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: character to print
 *
 *
 * Return: 0 success
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);
	return (1 * binary_tree_is_full(tree->left) *
			binary_tree_is_full(tree->right));
}

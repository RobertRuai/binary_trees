#include "binary_trees.h"
#define MAX(i, j) (((i) > (j)) ? (i) : (j))

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: character to print
 *
 *
 * Return: 0 success
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	return (MAX(left, right));
}

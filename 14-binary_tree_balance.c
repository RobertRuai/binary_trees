#include "binary_trees.h"

#define MAX(i, j) (((i) > (j)) ? (i) : (j))

/**
 * height - measures the height of a binary tree
 *
 * @tree: character to print
 *
 *
 * Return: 0 success
 */

size_t height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + height(tree->left);
	if (tree->right)
		right = 1 + height(tree->right);

	return (MAX(left, right));
}

/**
 * binary_tree_balance - measures the balnce factor of a binary tree
 *
 * @tree: character to print
 *
 *
 * Return: 0 success
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + height(tree->left);
	if (tree->right)
		right = 1 + height(tree->right);

	return (left - right);
}

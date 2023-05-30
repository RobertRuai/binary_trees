#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: character to print
 *
 * Return: 0 success
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}

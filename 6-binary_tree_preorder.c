#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through binary tree using pre-order traversal
 *
 * @tree: character to print
 * @func: character to print
 *
 *
 * Return: 0 success
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->left, func);
}

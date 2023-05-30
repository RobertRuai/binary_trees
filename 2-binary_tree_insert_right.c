#include "binary_trees.h"

/**
 * binary_tree_insert_right -inserts a node as the right-child of another node
 *
 * @parent: character to print
 * @value: character to print
 *
 *
 * Return: 0 success
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);
	newNode = binary_tree_node(parent, value);

	if (!newNode)
		return (NULL);

	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}

	parent->right = newNode;
	return (newNode);
}

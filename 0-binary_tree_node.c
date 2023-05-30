#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 *
 * @parent: character to print
 * @value: character to print
 *
 * Return: 0 success
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}

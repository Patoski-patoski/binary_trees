#include "binary_trees.h"

/**
 * binary_tree_sibling-  a function that finds the sibling of a node
 * @tree: a pointer to a function that finds the sibling of a node
 *
 * Return: a pointer to the sibling node, otherwise NULL
 **/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	if (node == node->parent->right)
		return (node->parent->left);

	return (NULL);
}

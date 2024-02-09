#include "binary_trees.h"

/**
 * binary_tree_uncle- a function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return:  a pointer to the uncle node, otherwise NULL
 **/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling-  a function that finds the sibling of a node
 * @node: a pointer to a function that finds the sibling of a node
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

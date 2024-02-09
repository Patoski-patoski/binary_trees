#include "binary_trees.h"

/**
 * binary_trees_ancestor- a function that finds the lowest common ancestor of
 * two nodes
 *
 * @first: a pointer to the first node
 * @second:  a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node of the two given nodes,
 * otherwise NULL
 **/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (!first || !second || !first->parent || !second->parent)
		return (NULL);

	if (first->parent == second->parent)
		return (first->parent);

	if (first == binary_tree_sibling(second->parent))
		return (first->parent);

	if (second == binary_tree_sibling(first->parent))
		return (second->parent);

	if (first->left == second || first->right == second)
		return (second->parent);

	if (second->left == first || second->right == second)
		return (first->parent);

	return (NULL);
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

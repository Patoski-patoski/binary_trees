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

	if (first == NULL || second == NULL)
		return (NULL);

	if (first->parent == second->parent)
		return (first->parent);

	if (first == binary_tree_sibling(second->parent))
		return (first->parent);

	if (second == binary_tree_sibling(first->parent))
		return (second->parent);

	binary_tree_t *ancestor1 = parent_child_check(first, second);

	if (ancestor1 != NULL)
		return (ancestor1);
	binary_tree_t *ancestor2 = parent_child_check(second, first);

	if (ancestor2 != NULL)
		return (ancestor2);
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

/**
 * parent_child_check- checks if either of two nodes are a parent of the other
 *
 * @node: the first node
 * @target: the target node
 *
 * Return: a pointer to parent node, otherwise NULL
 **/

binary_tree_t *parent_child_check(const binary_tree_t *node,
		const binary_tree_t *target)
{
	if (node->left == target || node->right == target)
		return (target->parent);

	return (NULL);
}

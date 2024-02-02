#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the
 * right-child of another node
 *
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: on success, a pointer to the created node, or NULL on failure or if
 * parent is NULL
 *
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *oldRightNode = NULL;

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	oldRightNode = parent->right;

	if (oldRightNode != NULL)
	{
		newNode->right = oldRightNode;
		newNode->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}

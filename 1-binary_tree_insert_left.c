#include "binary_trees.h"

/**
 * binary_tree_insert_left- a function that inserts a node as the left-child
 * of another node
 *
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: On Success,  a pointer to the created node, or NULL on
 * failure or if parent is NULL
 *
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;
	binary_tree_t *oldLeftChild = NULL;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	oldLeftChild = parent->left;

	if (oldLeftChild != NULL)
	{
		newNode->left = oldLeftChild;
		newNode->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}

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

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	/* Save the old left child */
	binary_tree_t *oldLeftChild = parent->left;

	/* Set the new node as the left child of the parent */
	parent->left = newNode;

	/* If the old left child existed, make it the left child of the new node */
	if (oldLeftChild == NULL)
		newNode->left = oldLeftChild;

	return (newNode);
}

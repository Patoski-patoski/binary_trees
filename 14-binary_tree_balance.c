#include "binary_trees.h"

/**
 * binary_tree_balance- a function that measures the balance factor of a
 * binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return:  measures the balance factor, otherwise 0
 *
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight = 0;
	int rightHeight = 0;
	int balance_factor;

	if (tree == NULL)
		return (0);

	leftHeight =  binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	balance_factor = leftHeight - rightHeight;
	return (balance_factor);
}

/**
 * binary_tree_height-  a function that measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the height
 *
 * Return: the height of the tree, otherwise 0
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (tree == NULL)
		return (0);

	leftHeight += 1 + binary_tree_height(tree->left);
	rightHeight += 1 + binary_tree_height(tree->right);

	if (leftHeight > rightHeight)
		return (leftHeight);
	return (rightHeight);
}

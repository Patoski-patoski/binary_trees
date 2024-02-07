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
	size_t leftHeight = 0;
	size_t rightHeight = 0;
	int balance_factor;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		leftHeight += 1 + binary_tree_balance(tree->left);

	if (tree->right != NULL)
		rightHeight += 1 + binary_tree_balance(tree->right);

	balance_factor = leftHeight - rightHeight;
	return (balance_factor);
}


#include "binary_trees.h"

/**
 * binary_tree_is_perfect- a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree isperfect, otherwise 0
 *
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int rightPerfect;
	int leftPerfect;

	if (tree == NULL)
		return (0);

	leftPerfect =  binary_tree_height(tree->left);
	rightPerfect =  binary_tree_height(tree->right);

	return ((leftPerfect == rightPerfect) ? 1 : 0);
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

	if (tree->left != NULL)
		leftHeight += 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		rightHeight += 1 + binary_tree_height(tree->right);

	if (leftHeight > rightHeight)
		return (leftHeight);
	return (rightHeight);
}

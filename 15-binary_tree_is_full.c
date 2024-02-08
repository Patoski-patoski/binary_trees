#include "binary_trees.h"

/**
 * binary_tree_is_full- a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if True, otherwise 0
 *
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftFull = 0;
	int rightFull = 0;

	if (tree == NULL)
		return (0);
	leftFull = binary_tree_is_full(tree->left);
	rightFull = binary_tree_is_full(tree->right);

	return ((leftFull == rightFull) ? 1 : 0);
}

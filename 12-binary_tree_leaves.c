#include "binary_trees.h"

/**
 * binary_tree_leaves-  a function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: the number of leaves
 *
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t result = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	result += binary_tree_leaves(tree->left) +  binary_tree_leaves(tree->right);
	return (result);
}

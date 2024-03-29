#include "binary_trees.h"

/**
 * binary_tree_size -  a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the size of tree, otherwise 0
 *
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t rightSize = 0;
	size_t leftSize = 0;

	if (tree == NULL)
		return (0);

	leftSize = binary_tree_size(tree->left);
	rightSize = binary_tree_size(tree->right);

	return (1 + leftSize + rightSize);
}

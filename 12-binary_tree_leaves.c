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
	size_t leftLeaf = 0;
	size_t rightLeaf = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		if (tree->left)
			leftLeaf = binary_tree_leaves(tree->left->left);
		if (tree->right)
			leftLeaf = binary_tree_leaves(tree->left->right);
	}
	if (tree->right)
	{
		if (tree->right)
			rightLeaf = binary_tree_leaves(tree->right->right);
		if (tree->left)
			rightLeaf = binary_tree_leaves(tree->right->left);
	}
	return ((rightLeaf + leftLeaf) + 1);
}

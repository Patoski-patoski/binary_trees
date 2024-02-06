#include "binary_trees.h"

/**
 * binary_tree_depth-  a function that measures the depth of a node in a
 * binary tree
 *
 * @tree: a pointer to the node to measure the depth
 * Return: Nothing
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (depth += 1 + binary_tree_depth(tree->parent));
}

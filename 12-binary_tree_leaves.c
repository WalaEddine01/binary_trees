#include "binary_trees.h"

/**
 * size_t binary_tree_leaves - a function that counts the leaves in a binary tree.
 * @tree: is a pointer to the root node of the tree .
 * Return: the number of leaves,Otherwise 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}


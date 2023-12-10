#include "binary_trees.h"

/**
 * size_t binary_tree_leaves - a function that counts the leaves in a binary tree.
 * @tree: is a pointer to the root node of the tree .
 * Return: the number of leaves,Otherwise 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count += (tree->left == NULL && tree->right == NULL) ? 1 : 0;
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	return (count);
}


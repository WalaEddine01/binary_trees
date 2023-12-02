#include "binary_trees.h"
/**
 * binary_tree_depth - this function measures the depth of
 * a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: the depth or O if tree is NULL
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || !tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}

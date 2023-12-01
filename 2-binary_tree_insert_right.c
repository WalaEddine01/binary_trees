#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a
 * node as the right-child of another node
 * @parent: a pointer to the parent of the new node
 * @value: the value of the new node
 * Return: a pointer to the new node,
 * or NULL on failure oor if parent is NULL
 * Description - if parent already has a right-child, the new
 * node must take its place, and the old right-child must be
 * set as the right-child of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	binary_tree_t *new = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right = new;
		return (new);
	}
	else
	{
		parent->right = new;
		return (new);
	}
}

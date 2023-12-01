#include <stdio.h>
#include "binary_trees.h"

binary_tree_t *creat(int value, binary_tree_t *parent)
{
    if (parent == NULL)
        return (NULL);

    binary_tree_t *node = malloc(sizeof(binary_tree_t));

    if (node == NULL)
        return (NULL);

    node->n = value;
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

binary_tree_t *creat_left(int value, binary_tree_t *parent)
{
    if (parent == NULL)
        return (NULL);

    binary_tree_t *new = creat_left(value, parent);

    if (new == NULL)
        return NULL;

    if (parent->left != NULL)
    {
        
    }
}

#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 98);
    root->right = binary_tree_node(root, 98);
    binary_tree_print(root);
    printf("\n");
    binary_tree_insert_left(root->right, 128);
    binary_tree_insert_left(root, 54);
    binary_tree_print(root);
    return (0);
}
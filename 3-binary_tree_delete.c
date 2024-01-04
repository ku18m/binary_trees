#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child.
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 *
 * Return: pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
        return;

    if (tree->left) binary_tree_delete(tree->left);
    if (tree->right) binary_tree_delete(tree->right);

    free(tree);
    tree = NULL;
}

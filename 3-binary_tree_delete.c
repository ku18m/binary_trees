#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree.
 * @tree: pointer to the root node of the tree to delete.
 *
 * Return: pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);

	free(tree);
	tree = NULL;
}

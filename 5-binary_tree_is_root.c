#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: node in binary trees
 * Return: 1 if root, 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (1);
	return (0);
}

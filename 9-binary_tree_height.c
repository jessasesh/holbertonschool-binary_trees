#include "binary_trees.h"

/**
 * binary_tree_height - gets height of a binary tree
 * @tree: pointer to root node of tree to measure
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return (l_height > r_height ? l_height + 1 : r_height + 1);
}

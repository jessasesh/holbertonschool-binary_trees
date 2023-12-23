#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance needed
 * @tree: pointer to root node to calculate balance needed
 * Return: balance needed
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height - right_height);
}

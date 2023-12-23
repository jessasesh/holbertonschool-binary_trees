#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: pointer to node to insert the right child in
 * @value: value to store in the node
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		newnode->right->parent = newnode;
	}
	parent->right = newnode;
	return (newnode);
}

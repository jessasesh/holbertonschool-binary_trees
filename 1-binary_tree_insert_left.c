#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as the left-child
 * @parent: pointer to a node to insert the left child in
 * @value: value to store in the node
 * Return: pointer to create node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		newnode->left->parent = newnode;
	}
	parent->left = newnode;
	return (newnode);
}

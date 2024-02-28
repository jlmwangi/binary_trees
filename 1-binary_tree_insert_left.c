#include "binary_trees.h"

/*
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to node to insert left child in
 * @value: value to store in the new node
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (parent == NULL)
		return (NULL);

	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}


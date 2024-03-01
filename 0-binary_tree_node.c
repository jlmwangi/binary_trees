#include "binary_trees.h"

/*
 * binary_tree_node - pointer to a binary_tree_t structure
 * @parent: pointer to parent node of node to create
 * @value: int
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;

	return (new);
}

#include "binary_trees.h"

/*
 * inary_tree_node - pointer to a binary_tree_t structure
 * @parent: pointer to parent node of node to create
 * @value: int
 * return: binary_tree_t
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	new->parent = parent;
	new->n = value;

	if (new == NULL)
		return (NULL);
	return (new);
}

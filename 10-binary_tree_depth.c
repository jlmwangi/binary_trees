#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node in a binary tree
 * @tree: pointer to node to measure depth
 * Return: size_t
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t r;
	size_t l;

	if (tree == NULL)
		return (0);
	l = binary_tree_depth(tree->left);
	r = binary_tree_depth(tree->right);

	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}

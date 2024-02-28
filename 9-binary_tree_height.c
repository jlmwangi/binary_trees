#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r;
	size_t l;

	if (tree == NULL)
		return (0);

	else
	{
		l = binary_tree_height(tree->left);
		r = binary_tree_height(tree->right);

		if (l > r)
			return (l + 1);
		else
			return (r + 1);
	}
}

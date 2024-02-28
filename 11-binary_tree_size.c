#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right, len;

	if (tree == NULL)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	len = 1 + left + right;
	return (len);
}

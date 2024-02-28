#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node
 * Return: int
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left != right)
		return (0);

	if (!binary_tree_is_full(tree->left) || !binary_tree_is_full(tree->right))
		return (0);

	return (binary_tree_is_perfect(tree->left) && \
			binary_tree_is_perfect(tree->right));
}

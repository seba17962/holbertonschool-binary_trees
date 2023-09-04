#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Function to check if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 * Return: 1 if the tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;
	const binary_tree_t *left = tree->left, *right = tree->right;

	if (tree == NULL)
		return (0);

	while (left)
	{
		left_height++;
		left = left->left;
	}

	while (right)
	{
		right_height++;
		right = right->right;
	}
	if (left_height == right_height)
	{
		if (!tree->left && !tree->right)
			return (1);

		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}

#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Function to check if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 * Return: 1 if the tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_is_perfect(tree->left);
	right_height = binary_tree_is_perfect(tree->right);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_height == right_height && left_size == right_size);
}

#include "binary_trees.h"
/**
 * binary_tree_height - Function to find the height of a binary tree
 * @tree: Pointer to the root node of the tree.
 * Return: The height of the tree.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}
/**
 * binary_tree_is_perfect - Function to check if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 * Return: 1 if the tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t nodes = 1, i;

	if (tree == NULL)
		return (0);

	for (i = 0; i < height; i++)
		nodes *= 2;

	return (nodes - 1 == binary_tree_height(tree));
}

#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size of a binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;
	size_t sum_size = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		size_left = binary_tree_size(tree->left);

	if (tree->right)
		size_right = binary_tree_size(tree->right);

	sum_size = size_left + size_right;
	return (sum_size + 1);
}

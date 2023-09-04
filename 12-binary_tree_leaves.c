#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: the count
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;
	size_t count_sum = 0;

	if (tree == NULL)
		return (0);

	else if (!tree->left && !tree->right)
		return (1);

	count_left = binary_tree_leaves(tree->left);
	count_right = binary_tree_leaves(tree->right);
	count_sum = count_left + count_right;
	return (count_sum);

}

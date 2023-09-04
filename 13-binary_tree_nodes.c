#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1
 * child in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of nodes
 * Return: the count of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;
	size_t count_sum = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (1);

	count_left = binary_tree_nodes(tree->left);
	count_right = binary_tree_nodes(tree->right);
	count_sum = count_left + count_right;
	return (count_sum);
}

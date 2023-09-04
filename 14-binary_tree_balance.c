#include "binary_trees.h"
/**
 * binary_tree_balance - Function to measure the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: The balance factor of the tree.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);

	if (left_height == -1 || right_height == -1 || abs(left_height -
				right_height) > 1)
		return (-1);

	return (1 + (left_height > right_height ? left_height : right_height));
}

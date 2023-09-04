#include "binary_trees.h"
/**
 * binary_tree_balance - Function to measure the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: The balance factor of the tree.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Function to check if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 * Return: 1 if the tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leaf_level = -1;
	int level = 0;

	if (tree == NULL)
		return (0);

	while (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			if (leaf_level == -1)
				leaf_level = level;
			else if (leaf_level != level)
				return (0);
		}
		if (tree->left == NULL || tree->right == NULL)
			return (0);
		level++;
		tree = tree->left;
	}
	return (1);
}

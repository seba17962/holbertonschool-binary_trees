#include "binary_trees.h"

/**
 *	binary_tree_depth - measures the depth of a node in a binary tree
 *	@tree: a pointer to the node to measure the depth
 *	Return: the depth of the binary tree, 0 if tree its null
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	if (tree->parent)
		depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}

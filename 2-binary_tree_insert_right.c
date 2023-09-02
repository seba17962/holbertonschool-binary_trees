#include "binary_trees.h"

/**
 *  binary_tree_insert_right - inserts a node as the right-child of another node
 *  @parent: is a pointer to the node to insert the right-child in
 *  @value: is the value to store in the new node
 *  Return: a pointer to the created node,
 *	or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_Node = NULL;

	if (parent == NULL)
		return (NULL);

	new_Node = malloc(sizeof(binary_tree_t));
	if (new_Node == NULL)
		return (NULL);


	new_Node->parent = parent;
	new_Node->n = value;
	new_Node->right = NULL;
	new_Node->left = NULL;

	if (parent->right != NULL)
	{
		new_Node->right = parent->right;
		parent->right->parent = new_Node;
	}

	parent->right = new_Node;

	return (new_Node);
}

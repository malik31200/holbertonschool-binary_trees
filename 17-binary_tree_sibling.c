#include "binary_trees.h"

/**
  * binary_tree_sibling - Find a node.
  * @node: Node to be found.
  *
  * Return: Pointer to the node.
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}

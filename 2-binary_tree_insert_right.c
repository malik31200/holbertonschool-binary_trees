#include "binary_trees.h"

/**
  * binary_tree_insert_right - Insert a node to the right.
  * @parent: Node's parent.
  * @value: Node's value.
  *
  * Return: New node.
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);

	if (parent->right)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	parent->right = new;

	return (new);
}

/**
 * binary_tree_is_leaf - Function that check if a node is a leaf
 * @node: is a node in a binary tree
 * Return: 1 if node is a leaf or 0 if it is not
 */
int binary_tree_is_leaf(const binary_tree_t *node);
{

	if (node == NULL)
	{
		return (0);
	}

	if (node->right == NULL || node->left == NULL)
	{
		return (1);
	}

	return (0);
}

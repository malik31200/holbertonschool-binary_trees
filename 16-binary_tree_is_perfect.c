#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: Pointer to the root.
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    
    if (tree == NULL)
    {
        return (0);
    }

     if ( binary_tree_height(tree->left) != binary_tree_height(tree->right))
     {
        return (0);
     }
    return (binary_tree_is_full(tree));

}
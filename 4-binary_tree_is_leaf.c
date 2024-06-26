#include "binary_trees.h"

/**
 * binary_tree_is_leaf: checks if a node is a leaf node.
 * @node: A pointer to the node to be checked.
 *
 * Return: If the node is a leaf: 1
 *      else: 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL || node->left != NULL || node->right != NULL)
        return (0);

    return (1);
}

#include "binary_trees.h"

/**
 * binary_tree_inseert_right - Inserts a node as the left child of another node.
 * @parent: a Pointer to the Node the right child is inserted in.
 * @value: The value stored in the new node.
 *
 * Return: If an error occurs - NULL
 *         Else return a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    if (parent == NULL)
        return (NULL);

    new = binary_tree_node(parent, value);
    if (new == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        new->right = parent->right;
        parent->right->parent = new;
    }
    parent->right = new;

    return (new);
}

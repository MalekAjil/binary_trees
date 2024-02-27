#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tmp = tree, *prnt = NULL;

	if (tree == NULL)
		return;
	while (tmp != NULL)
	{
		if (tmp->left != NULL)
		{
			prnt = tmp;
			tmp = tmp->left;
		}
		else if (tmp->right != NULL)
		{
			prnt = tmp;
			tmp = tmp->right;
		}
		else
		{
			free(tmp);
			tmp = prnt;
		}
	}
}

#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tmp = tree, *prnt = NULL;
	int isLeft = 1;

	if (tree == NULL)
		return;
	while (tmp != NULL)
	{
		if (tmp->left != NULL)
		{
			tmp = tmp->left;
			isLeft = 1;
		}
		else if (tmp->right != NULL)
		{
			tmp = tmp->right;
			isLeft = 0;
		}
		else
		{
			binary_tree_print(tree);
			prnt = tmp->parent;
			free(tmp);
			if (isLeft)
				prnt->left = NULL;
			else
				prnt->right = NULL;
			tmp = prnt;
			binary_tree_print(tree);
		}
	}
}

#include <stdio.h>
#include "node.h"

void print(struct node *root, int level, int *tree);

void print_all_paths(struct node *root)
{
	int tree[1000] = {0};
	print(root, 1, tree);
	return;
}

void print(struct node *root, int level, int *tree)
{
	if(root == NULL)
	{
		return;
	}
	else if((root->left == NULL) && (root->right == NULL))
	{
		tree[level - 1] = root->data;
		int i;
		for(i = 0;i < level - 1;i++)
		{
			printf("%d ", tree[i]);
		}
		printf("%d\n", tree[level - 1]);
		return;
	}
	else
	{
		tree[level - 1] = root->data;
		print(root->left, level + 1, tree);
		print(root->right, level + 1, tree);
		return;
	}
}
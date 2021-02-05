#include <stdio.h>
#include <stdlib.h>
#include "operations.h"

int depthAvglevel(Node *root, int level);
int depthAvgways(Node *root);

Node *FlipTree(Node *root)
{
	Node *flip;
	if(root == NULL)
	{
		return NULL;
	}
	flip = (Node *)malloc(sizeof(Node));
	flip->n = root->n;
	flip->left = FlipTree(root->right);
	flip->right = FlipTree(root->left);
	return (flip);
}

int isIdentical(Node *tree1, Node *tree2)
{
	if((tree1 == NULL) && (tree2 == NULL))
	{
		return 1;
	}
	else if(tree1->n != tree2->n)
	{
		return 0;
	}
	else
	{
		return (isIdentical(tree1->left, tree2->left) && isIdentical(tree1->right, tree2->right));
	}
}

void depthAvg(Node *root)
{
	int levelsum;
	levelsum = depthAvglevel(root, 0);
	int ways;
	ways = depthAvgways(root);
	printf("%d/%d\n", levelsum, ways);
}

int depthAvglevel(Node *root, int level)
{
	if(root == NULL)
	{
		return 0;
	}
	if(root->left == NULL && root->right == NULL)
	{
		return level;
	}
	else
	{
		return (depthAvglevel(root->left, level + 1) + depthAvglevel(root->right, level + 1));
	}
}

int depthAvgways(Node *root)
{
	if(root == NULL)
	{
		return 0;
	}
	if(root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	else
	{
		return (depthAvgways(root->left) + depthAvgways(root->right));
	}
}
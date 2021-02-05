#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

Node *construct(Node *root, char instruction[])
{
	if(root == NULL)
	{
		root = (Node *)malloc(sizeof(Node));
		root->data = 1;
		root->left = NULL;
		root->right = NULL;
	}
	else
	{
		(root->data)++;
	}
	Node *first;
	first = root;
	int i;
	for(i = 0;i < strlen(instruction);i++)
	{
		if(instruction[i] == 'L' && root->left == NULL)
		{
			root->left = (Node *)malloc(sizeof(Node));
			root = root->left;
			root->data = 1;
			root->left = NULL;
			root->right = NULL;
		}
		else if(instruction[i] == 'R' && root->right == NULL)
		{
			root->right = (Node *)malloc(sizeof(Node));
			root = root->right;
			root->data = 1;
			root->left = NULL;
			root->right = NULL;
		}
		else if(instruction[i] == 'L' && root->left != NULL)
		{
			root = root->left;
			(root->data)++;
		}
		else if(instruction[i] == 'R' && root->right != NULL)
		{
			root = root->right;
			(root->data)++;
		}
	}
	return (first);
}

int query(Node *root, char instruction[])
{
	int num = root->data;
	int i;
	for(i = 0;i < strlen(instruction);i++)
	{
		if(instruction[i] == 'L' && root->left == NULL)
		{
			return 0;
		}
		else if(instruction[i] == 'R' && root->right == NULL)
		{
			return 0;
		}
		else if(instruction[i] == 'L' && root->left != NULL)
		{
			root = root->left;
			num = root->data;
		}
		else if(instruction[i] == 'R' && root->right != NULL)
		{
			root = root->right;
			num = root->data;
		}
	}
	return num;
}
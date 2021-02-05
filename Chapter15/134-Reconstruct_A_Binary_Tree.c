#include <stdio.h>
#include <stdlib.h>

typedef struct treenode
{
	int data;
	struct treenode *left;
	struct treenode *right;
}Treenode;

Treenode *insert_bs_tree(Treenode *root, int data);
int find_tree(Treenode *root, int now1, int now2, int findlevel1, int findlevel2, int find1, int find2);

int main()
{
	int n;
	scanf("%d", &n);
	int i, j;
	int number[n], level[n];
	for(i = 0;i < n;i++)
	{
		scanf("%d %d", &number[i], &level[i]);
	}
	int p;
	scanf("%d", &p);
	int find1[p], find2[p];
	for(i = 0;i < p;i++)
	{
		scanf("%d %d", &find1[i], &find2[i]);
	}

	int temp;
	for(i = n - 2;i >= 0;i--)
	{
		for(j = 0;j <= i;j++)
		{
			if(level[j] > level[j + 1] || (level[j] == level[j + 1] && number[j] > number[j + 1]))
			{
				temp = level[j];
				level[j] = level[j + 1];
				level[j + 1] = temp;
				temp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}

	Treenode *root = NULL;
	for(i = 0;i < n;i++)
	{
		root = insert_bs_tree(root, number[i]);
	}

	int check1[p], check2[p];
	int findlevel1[p], findlevel2[p];
	for(i = 0;i < p;i++)
	{
		check1[i] = 0;
		check2[i] = 0;
		for(j = 0;j < n;j++)
		{
			if(check1[i] == 1 && check2[i] == 1)
			{
				break;
			}
			else if(check1[i] == 0 && find1[i] == number[j])
			{
				findlevel1[i] = level[j];
				check1[i] = 1;
			}
			else if(check2[i] == 0 && find2[i] == number[j])
			{
				findlevel2[i] = level[j];
				check2[i] = 1;
			}
		}
	}
	for(i = 0;i < p;i++)
	{
		printf("%d\n", find_tree(root, 1, 1, findlevel1[i], findlevel2[i], find1[i], find2[i]));
	}
	return 0;
}

Treenode *insert_bs_tree(Treenode *root, int data)
{
	Treenode *current;
	if(root == NULL)
	{
		current = (Treenode *)malloc(sizeof(Treenode));
		current->data = data;
		current->left = NULL;
		current->right = NULL;
		return (current);
	}
	if(data < root->data)
	{
		root->left = insert_bs_tree(root->left, data);
	}
	else
	{
		root->right = insert_bs_tree(root->right, data);
	}
	return (root);
}

int find_tree(Treenode *root, int now1, int now2, int findlevel1, int findlevel2, int find1, int find2)
{
	if(now1 == findlevel1)
	{
		return (findlevel2 - now2);
	}
	if(now2 == findlevel2)
	{
		return (findlevel1 - now1);
	}
	while((find1 < root->data && find2 < root->data) || (find1 > root->data && find2 > root->data))
	{
		if(find1 < root->data && find2 < root->data)
		{
			root = root->left;
		}
		else
		{
			root = root->right;
		}
		now1++;
		now2++;
		if(now1 == findlevel1)
		{
			return (findlevel2 - now2);
		}
		if(now2 == findlevel2)
		{
			return (findlevel1 - now1);
		}
	}
	return (findlevel1 - now1) + (findlevel2 - now2);
}
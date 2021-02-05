#include <stdio.h>

void shuffle(int *deck[])
{
	int i = 0;
	int temp[10000];
	int j;
	int k = 0;
	while(deck[i] != NULL)
	{
		temp[i] = *deck[i];
		i++;
	}
	if(i != 0)
	{
		if(i % 2 == 1)
		{
			for(j = 0;j < i - 1;j += 2)
			{
				*deck[j] = temp[k];
				*deck[j + 1] = temp[i / 2 + 1 + k];
				k++;
			}
			*deck[i - 1] = temp[i / 2];
		}
		else
		{
			for(j = 0;j < i;j += 2)
			{
				*deck[j] = temp[k];
				*deck[j + 1] = temp[i / 2 + k];
				k++;
			}
		}
	}
}

void print(int *deck[])
{
	if(deck[0] != NULL)
	{
		printf("%d", *deck[0]);
		int i = 1;
		while(deck[i] != NULL)
		{
			printf(" %d", *deck[i]);
			i++;
		}
	}
}
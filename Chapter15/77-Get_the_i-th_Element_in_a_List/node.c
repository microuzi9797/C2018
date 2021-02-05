#include <stdio.h>
#include "node.h"

struct node *getNode(struct node *head, unsigned int i)
{
	int counter = 0;
	struct node *ptr;
	ptr = head;
	while(ptr != NULL)
	{
		ptr = ptr->next;
		counter++;
	}
	ptr = head;
	if(i > counter - 1)
	{
		return NULL;
	}
	else
	{
		int j;
		for(j = 1;j <= counter - i - 1;j++)
		{
			ptr = ptr->next;
		}
		return ptr;
	}
}
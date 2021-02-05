#include <stdio.h>
#include <string.h>
#include "componentPart.h"

int addprice(int i, ComponentPart list[]);

void findPrice(int N, ComponentPart list[])
{
	int i, j;
	for(i = 0;i < N;i++)
	{
		if(list[i].numComponent != 0)
		{
			addprice(i, list);
		}
	}
	char temp[MAXLENGTH];
	int tempnumber;
	for(i = N - 2;i >= 0;i--)
	{
		for(j = 0;j <= i;j++)
		{
			if(strcmp(list[j].name, list[j + 1].name) > 0)
			{
				strcpy(temp, list[j].name);
				strcpy(list[j].name, list[j + 1].name);
				strcpy(list[j + 1].name, temp);
				tempnumber = list[j].price;
				list[j].price = list[j + 1].price;
				list[j + 1].price = tempnumber;
			}
		}
	}
	for(i = 0;i < N;i++)
	{
		printf("%s %d\n", list[i].name, list[i].price);
	}
}

int addprice(int i, ComponentPart list[])
{
	int j;
	if(list[i].price == 0)
	{
		for(j = 0;j < list[i].numComponent;j++)
		{
			list[i].price += addprice(list[i].componentPartList[j], list);
		}
	}
	return list[i].price;
}
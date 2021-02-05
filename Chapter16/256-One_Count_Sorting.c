#include <stdio.h>
#include <stdlib.h>

typedef struct number
{
	long long unsigned int num;
	int count;
}Number;

int compare(const void *data1, const void *data2);

int main()
{
	Number a[1000];
	int counter = 0;
	while(scanf("%llu", &a[counter].num) != EOF)
	{
		counter++;
	}
	int i, j;
	for(i = 0;i < counter;i++)
	{
		a[i].count = 0;
		for(j = 0;j < 63;j++)
		{
			if(((a[i].num >> j) & 1) == 1)
			{
				a[i].count++;
			}
		}
	}
	qsort(a, counter, sizeof(Number), compare);
	for(i = 0;i < counter;i++)
	{
		printf("%llu\n", a[i].num);
	}
	return 0;
}

int compare(const void *data1, const void *data2)
{
	Number *ptr1 = (Number *)data1;
	Number *ptr2 = (Number *)data2;
	if(ptr1->count < ptr2->count)
	{
		return -1;
	}
	else if(ptr1->count > ptr2->count)
	{
		return 1;
	}
	else if(ptr1->num < ptr2->num)
	{
		return -1;
	}
	else if(ptr1->num > ptr2->num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
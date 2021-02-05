#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct paper
{
	char name[17];
	unsigned int citation;
}Paper;

int compare(const void *data1, const void *data2);

int main()
{
	Paper a[20000];
	int count = 0;
	while(scanf("%s %u", a[count].name, &a[count].citation) != EOF)
	{
		count++;
	}
	qsort(a, count, sizeof(Paper), compare);

	char temp[17];
	strcpy(temp, a[0].name);
	unsigned int index = 0;

	int i;
	for(i = 0;i < count;i++)
	{
		if(strcmp(temp, a[i].name) != 0)
		{
			printf("%s %u\n", temp, index);
			strcpy(temp, a[i].name);
			index = 0;
		}
		if(a[i].citation >= index + 1)
		{
			index++;
		}
	}
	printf("%s %u\n", temp, index);
	return 0;
}

int compare(const void *data1, const void *data2)
{
	Paper *ptr1 = (Paper *)data1;
	Paper *ptr2 = (Paper *)data2;
	if(strcmp(ptr1->name, ptr2->name) != 0)
	{
		return (strcmp(ptr1->name, ptr2->name));
	}
	else if(ptr1->citation > ptr2->citation)
	{
		return -1;
	}
	else if(ptr1->citation < ptr2->citation)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
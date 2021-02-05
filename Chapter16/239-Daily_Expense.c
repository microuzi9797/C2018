#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct expense
{
	int year;
	int month;
	int day;
	char category[33];
	int amount;
}Expense;

int compare(const void *data1, const void *data2);

int main()
{
	Expense a[10000];
	int i = 0, j;
	while(scanf("%d %d %d %s %d", &a[i].year, &a[i].month, &a[i].day, a[i].category, &a[i].amount) != EOF)
	{
		for(j = 0;j < i;j++)
		{
			if(a[i].year == a[j].year && a[i].month == a[j].month && a[i].day == a[j].day && (strcmp(a[i].category, a[j].category) == 0))
			{
				a[j].amount += a[i].amount;
				break;
			}
		}
		if(j == i)
		{
			i++;
		}
	}
	int count = i;
	qsort(a, count, sizeof(Expense), compare);
	for(i = 0;i < count;i++)
	{
		printf("%d %d %d %s %d\n", a[i].year, a[i].month, a[i].day, a[i].category, a[i].amount);
	}
	return 0;
}

int compare(const void *data1, const void *data2)
{
	Expense *ptr1 = (Expense *)data1;
	Expense *ptr2 = (Expense *)data2;
	if(ptr1->year < ptr2->year)
	{
		return -1;
	}
	else if(ptr1->year > ptr2->year)
	{
		return 1;
	}
	else if(ptr1->month < ptr2->month)
	{
		return -1;
	}
	else if(ptr1->month > ptr2->month)
	{
		return 1;
	}
	else if(ptr1->day < ptr2->day)
	{
		return -1;
	}
	else if(ptr1->day > ptr2->day)
	{
		return 1;
	}
	else
	{
		return (strcmp(ptr1->category, ptr2->category));
	}
}
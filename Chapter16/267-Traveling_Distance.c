#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point
{
	int x;
	int y;
	int distance;
}Point;

int compare(const void *data1, const void *data2);

int main()
{
	Point city[100000];
	int count = 0;
	while(scanf("%d %d", &city[count].x, &city[count].y) != EOF)
	{
		city[count].distance = pow(city[count].x, 2) + pow(city[count].y, 2);
		count++;
	}
	qsort(city, count, sizeof(Point), compare);
	int ans = city[0].distance;
	int i;
	for(i = 1;i < count;i++)
	{
		ans += (pow(city[i].x - city[i - 1].x, 2) + pow(city[i].y - city[i - 1].y, 2));
	}
	printf("%d", ans);
	return 0;
}

int compare(const void *data1, const void *data2)
{
	Point *ptr1 = (Point *)data1;
	Point *ptr2 = (Point *)data2;
	if(ptr1->distance < ptr2->distance)
	{
		return -1;
	}
	else if(ptr1->distance > ptr2->distance)
	{
		return 1;
	}
	else if(ptr1->x < ptr2->x)
	{
		return -1;
	}
	else if(ptr1->x > ptr2->x)
	{
		return 1;
	}
	else if(ptr1->y < ptr2->y)
	{
		return -1;
	}
	else if(ptr1->y > ptr2->y)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
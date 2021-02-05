#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point
{
	int x;
	int y;
	unsigned int r_square;
}Point;

typedef struct r
{
	unsigned int r_square;
	unsigned int count;
}R;

int compare(const void *data1, const void *data2);

Point a[1000100];
R b[1000100];

int main()
{
	int N;
	scanf("%d", &N);
	int i;
	for(i = 0;i < N;i++)
	{
		scanf("%d %d", &a[i].x, &a[i].y);
		a[i].r_square = pow(a[i].x, 2) + pow(a[i].y, 2);
	}
	qsort(a, N, sizeof(Point), compare);

	b[0].r_square = a[0].r_square;
	b[0].count = 1;
	unsigned int temp = b[0].r_square;
	int b_count = 0;
	for(i = 1;i < N;i++)
	{
		if(a[i].r_square == temp)
		{
			b[b_count].count++;
		}
		else
		{
			temp = a[i].r_square;
			b_count++;
			b[b_count].r_square = temp;
			b[b_count].count = 1;
		}
	}

	unsigned int max = 0;
	unsigned int ans;
	for(i = 0;i <= b_count;i++)
	{
		if(b[i].count >= max)
		{
			max = b[i].count;
			ans = b[i].r_square;
		}
	}

	printf("%u", ans);
	return 0;
}

int compare(const void *data1, const void *data2)
{
	Point *ptr1 = (Point *)data1;
	Point *ptr2 = (Point *)data2;
	if(ptr1->r_square < ptr2->r_square)
	{
		return -1;
	}
	else if(ptr1->r_square > ptr2->r_square)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
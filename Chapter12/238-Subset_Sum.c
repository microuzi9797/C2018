#include <stdio.h>

void numbers_of_ways(int point, int sum);

int n;
int a[15];
int count[1024] = {0};

int main()
{
	scanf("%d", &n);
	int i;
	for(i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	int k;
	numbers_of_ways(0, 0);
	while(scanf("%d", &k) != EOF)
	{
		printf("%d\n", count[k]);
	}
	return 0;
}

void numbers_of_ways(int point, int sum)
{
	if(point == n)
	{
		count[sum]++;
		return;
	}
	else
	{
		numbers_of_ways(point + 1, sum);
		numbers_of_ways(point + 1, sum + a[point]);
	}
}
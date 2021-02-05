#include <stdio.h>

int main()
{
	int N, m;
	scanf("%d %d", &N, &m);
	int number[10000];
	int i, j;
	for(i = 0;i < N;i++)
	{
		scanf("%d", &number[i]);
	}
	int sum[1000] = {0}, max[1000] = {0}, min[1000];
	for(i = 0;i < 1000;i++)
	{
		min[i] = 10000;
	}
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < m;j++)
		{
			if(number[i] % m == j)
			{
				sum[j] += number[i];
				if(number[i] > max[j])
				{
					max[j] = number[i];
				}
				if(number[i] < min[j])
				{
					min[j] = number[i];
				}
			}
		}
	}
	for(i = 0;i < m;i++)
	{
		printf("%d %d %d\n", sum[i], max[i], min[i]);
	}
	return 0;
}
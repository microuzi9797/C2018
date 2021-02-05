#include <stdio.h>

void knapsack(int point, int weight, int value);

int n;
int W;
int w[20], v[20];
int maxvalue = 0;

int main()
{
	scanf("%d %d", &n, &W);
	int i;
	for(i = 0;i < n;i++)
	{
		scanf("%d %d", &w[i], &v[i]);
	}
	knapsack(0, 0, 0);
	printf("%d", maxvalue);
	return 0;
}

void knapsack(int point, int weight, int value)
{
	if(point == n)
	{
		if(value > maxvalue && weight <= W)
		{
			maxvalue = value;
		}
		return;
	}
	else
	{
		knapsack(point + 1, weight, value);
		knapsack(point + 1, weight + w[point], value + v[point]);
	}
}
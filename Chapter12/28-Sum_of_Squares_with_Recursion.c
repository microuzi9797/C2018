#include <stdio.h>

int sumofsquares(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", sumofsquares(n));
	return 0;
}

int sumofsquares(int n)
{
	int sum;
	if(n == 1)
	{
		return 1;
	}
	else
	{
		sum = n * n + sumofsquares(n - 1);
		return sum;
	}
}
#include <stdio.h>

int C(int a, int b);

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int i;
	int F = 0;
	for(i = 0;i <= m;i++)
	{
		F += C(n, i);
	}
	printf("%d", F);
	return 0;
}

int C(int a, int b)
{
	int ans = 1;
	int i;
	if(b != 0)
	{
		for(i = a;i >= (a - b + 1);i--)
		{
			ans *= i;
		}
		for(i = b;i > 0;i--)
		{
			ans /= i;
		}
	}
	return ans;
}
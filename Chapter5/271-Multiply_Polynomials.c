#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int f[100] = {0};
	int i, j;
	for(i = n - 1;i >= 0;i--)
	{
		scanf("%d", &f[i]);
	}
	int m;
	scanf("%d", &m);
	int g[100] = {0};
	for(i = m - 1;i >= 0;i--)
	{
		scanf("%d", &g[i]);
	}
	int ans[199] = {0};
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < m;j++)
		{
			ans[i + j] += f[i] * g[j];
		}
	}
	for(i = n + m - 2;i > 0;i--)
	{
		printf("%d ", ans[i]);
	}
	printf("%d", ans[0]);
	return 0;
}
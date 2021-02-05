#include <stdio.h>

main()
{
	int r, c;
	scanf("%d", &r);
	scanf("%d", &c);
	int a[100][100] = {0};
	int i, j;
	int sum[100] = {0};
	for(i = 0;i < r;i++)
	{
		for(j = 0;j < c;j++)
		{
			scanf("%d", &(a[i][j]));
			sum[j] += a[i][j];
		}
	}
	int avg[100];
	for(i = 0;i < c;i++)
	{
		avg[i] = sum[i] / r;
		printf ("%d\n", avg[i]);
	}
}
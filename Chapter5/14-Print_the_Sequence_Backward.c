#include <stdio.h>

main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	int i, j;
	for(i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = n - 1;i > 0;i--)
	{
		printf("%d ", a[i]);
	}
	printf("%d\n", a[0]);
}
#include <stdio.h>

main()
{
	int n;
	scanf("%d", &n);
	int i;
	int j;
	for(i = 1;i <= n;i++)
	{
		for(j = 1;j <= i;j++)
		{
			printf("%d", j);
		}
	}
}
#include <stdio.h>

main()
{
	int n;
	int i;
	scanf("%d", &n);
	scanf("%d", &i);
	int j;
	int ans = 1;
	for(j = 1;j <= i;j++)
	{
		ans *= n;
	}
	printf("%d", ans);
}
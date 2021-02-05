#include <stdio.h>

main()
{
	int N;
	scanf("%d", &N);
	int a[N];
	int i;
	for(i = 0;i < N;i++)
	{
		scanf("%d", &a[i]);
	}
	int M;
	scanf("%d", &M);
	int j;
	int counter[200000] = {0};
	for(i = 0;i < N;i++)
	{
		counter[a[i] % M]++;
	}
	for(i = 0;i < M;i++)
	{
		printf("%d\n", counter[i]);
	}
}
#include <stdio.h>
#include <assert.h>

main()
{
	int N, M, R;
	scanf("%d", &N);
	scanf("%d", &M);
	scanf("%d", &R);
	assert(R == 0 || R == 1);
	int w;
	if(R == 0)
	{
		while(scanf("%d", &w) != EOF)
		{
			if(w <= N)
			{
				N -= w;
			}
			else if(w <= M)
			{
				M -= w;
			}
			printf("%d %d\n", N, M);
		}
	}
	else
	{
		while(scanf("%d", &w) != EOF)
		{
			if(w > N && w > M);
			else if(w > N && w <= M)
			{
				M -= w;
			}
			else if(w > M && w <= N)
			{
				N -= w;
			}
			else if(N <= M)
			{
				N -= w;
			}
			else if(M < N)
			{
				M -= w;
			}
			printf("%d %d\n", N, M);
		}
	}
}
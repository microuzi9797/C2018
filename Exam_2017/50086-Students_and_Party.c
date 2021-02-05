#include <stdio.h>

int friend[32768][256] = {0};
int numfriend[32768] = {0};
int check[32768] = {0};

int main()
{
	int N, E;
	scanf("%d %d", &N, &E);
	int i;
	int friend1, friend2;
	for(i = 0;i < E;i++)
	{
		scanf("%d %d", &friend1, &friend2);
		friend[friend1][numfriend[friend1]] = friend2;
		numfriend[friend1]++;
		friend[friend2][numfriend[friend2]] = friend1;
		numfriend[friend2]++;
	}
	int invited;
	while(scanf("%d", &invited) != EOF)
	{
		check[invited] = 1;
		for(i = 0;i < numfriend[invited];i++)
		{
			check[friend[invited][i]] = 1;
		}
	}
	for(i = 0;i < N;i++)
	{
		if(check[i] == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
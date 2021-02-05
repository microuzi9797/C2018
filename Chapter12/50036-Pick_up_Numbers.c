#include <stdio.h>

void numofways(int pick, int point, int sum);

int k, N, M;
int num[20];
int count[5000000];

int main()
{
	scanf("%d %d %d", &k, &N, &M);
	int i;
	for(i = 0;i < N;i++)
	{
		scanf("%d", &num[i]);
	}
	numofways(0, 0, 0);
	int ans = 0;
	for(i = 1; i <= M;i++)
	{
		ans += count[i];
	}
	printf("%d", ans);
	return 0;
}

void numofways(int pick, int point, int sum)
{
	if(pick >= k && point == N)
	{
		count[sum]++;
		return;
	}
	else if(pick <= k && point == N)
	{
		return;
	}
	else
	{
		numofways(pick, point + 1, sum);
		numofways(pick + 1, point + 1, sum + num[point]);
	}
}
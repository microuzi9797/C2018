#include <stdio.h>

int ways(int r, int c);

int map[12][12] = {0};

int main()
{
	int r, c;
	scanf("%d %d", &r, &c);
	int i, j;
	for(i = r - 1;i >= 0;i--)
	{
		for(j = 0;j < c;j++)
		{
			scanf("%d", &map[i][j]);
		}
	}
	printf("%d", ways(r - 1, c - 1));
	return 0;
}

int ways(int r, int c)
{
	if(r < 0 || c < 0 || map[r][c] == 0)
	{
		return 0;
	}
	else if(r == 0 && c == 0)
	{
		return 1;
	}
	else
	{
		return ways(r - 1, c) + ways(r, c - 1);
	}
}
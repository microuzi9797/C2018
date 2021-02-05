#include <stdio.h>

int main()
{
	int w, h;
	scanf("%d %d\n", &w, &h);
	char map[h][w];
	char c1, c0;
	scanf("%c %c", &c1, &c0);
	unsigned int n[1024];
	int count = 0;
	while(scanf("%d", &n[count]) != EOF)
	{
		count++;
	}
	unsigned int test;
	int hindex = 0, windex = 0;
	int i, j;
	for(i = 0;i < count;i++)
	{
		for(j = 31;j >= 0;j--)
		{
			test = (1 << j);
			if(n[i] & test)
			{
				map[hindex][windex] = c1;
			}
			else
			{
				map[hindex][windex] = c0;
			}
			if((hindex + 1 == h) && (windex + 1 == w))
			{
				break;
			}
			else if(windex + 1 == w)
			{
				hindex++;
				windex = 0;
			}
			else
			{
				windex++;
			}
		}
		if((hindex + 1 == h) && (windex + 1 == w))
		{
			break;
		}
	}
	for(i = 0;i < h;i++)
	{
		for(j = 0;j < w-1;j++)
		{
			printf("%c", map[i][j]);
		}
		printf("%c\n", map[i][w-1]);
	}
	return 0;
}
#include <stdio.h>

int main()
{
	int r, c;
	scanf("%d %d", &r, &c);
	int a[100][100] = {0};
	int i, j;
	for(i = 0;i < r;i++)
	{
		for(j = 0;j < c;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0;i < r;i++)
	{
		for(j = 0;j < c;j++)
		{
			if(i - 1 < 0 && j - 1 < 0)
			{
				if((a[i][j] > a[i][j + 1]) && (a[i][j] > a[i + 1][j]))
				{
					printf("%d\n", a[i][j]);
				}
			}
			else if(i - 1 < 0 && !(j - 1 < 0) && !(j + 1 >= c))
			{
				if((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i][j + 1]) && (a[i][j] > a[i + 1][j]))
				{
					printf("%d\n", a[i][j]);
				}
			}
			else if(i - 1 < 0 && j + 1 >= c)
			{
				if((a[i][j] > a[i][j - 1]) && (a[i][j] > a[i + 1][j]))
				{
					printf("%d\n", a[i][j]);
				}
			}
			else if(!(i - 1 < 0) && !(i + 1 >= r) && j - 1 < 0)
			{
				if((a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j + 1]) && (a[i][j] > a[i + 1][j]))
				{
					printf("%d\n", a[i][j]);
				}
			}
			else if(!(i - 1 < 0) && !(i + 1 >= r) && j + 1 >= c)
			{
				if((a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j - 1]) && (a[i][j] > a[i + 1][j]))
				{
					printf("%d\n", a[i][j]);
				}
			}
			else if(i + 1 >= r && j - 1 < 0)
			{
				if((a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j + 1]))
				{
					printf("%d\n", a[i][j]);
				}
			}
			else if(i + 1 >= r && !(j - 1 < 0) && !(j + 1 >= c))
			{
				if((a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j - 1]) && (a[i][j] > a[i][j + 1]))
				{
					printf("%d\n", a[i][j]);
				}
			}
			else if(i + 1 >= r && j + 1 >= c)
			{
				if((a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j - 1]))
				{
					printf("%d\n", a[i][j]);
				}
			}
			else
			{
				if((a[i][j] > a[i - 1][j]) && (a[i][j] > a[i][j - 1]) && (a[i][j] > a[i][j + 1]) && (a[i][j] > a[i + 1][j]))
				{
					printf("%d\n", a[i][j]);
				}
			}
		}
	}
	return 0;
}
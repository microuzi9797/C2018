#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[100][100] = {0};
	int i, j;
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int intersection = 0;
	int T_junction = 0;
	int turn = 0;
	int dead_end = 0;
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < n;j++)
		{
			if(a[i][j] == 1)
			{
				if(i - 1 < 0 && j - 1 < 0)
				{
					if((a[i + 1][j] == 1) && (a[i][j + 1] == 1))
					{
						turn++;
					}
					else if(((a[i + 1][j] == 1) && (a[i][j + 1] == 0)) || ((a[i][j + 1] == 1) && (a[i + 1][j] == 0)))
					{
						dead_end++;
					}
				}
				else if(i - 1 < 0 && !(j - 1 < 0) && !(j + 1 >= n))
				{
					if((a[i + 1][j] == 1) && (a[i][j - 1] == 1) && (a[i][j + 1] == 1))
					{
						T_junction++;
					}
					else if((a[i + 1][j] == 1) && ((a[i][j - 1] == 1) || (a[i][j + 1] == 1)))
					{
						turn++;
					}
					else if(((a[i + 1][j] == 1) && (a[i][j - 1] == 0) && (a[i][j + 1] == 0)) || ((a[i + 1][j] == 0) && (a[i][j - 1] == 1) && (a[i][j + 1] == 0) || ((a[i + 1][j] == 0) && (a[i][j - 1] == 0) && (a[i][j + 1] == 1))))
					{
						dead_end++;
					}
				}
				else if(i - 1 < 0 && j + 1 >= n)
				{
					if((a[i + 1][j] == 1) && (a[i][j - 1] == 1))
					{
						turn++;
					}
					else if(((a[i + 1][j] == 1) && (a[i][j - 1] == 0)) || ((a[i][j - 1] == 1) && (a[i + 1][j] == 0)))
					{
						dead_end++;
					}
				}
				else if(!(i - 1 < 0) && !(i + 1 >= n) && j - 1 < 0)
				{
					if((a[i - 1][j] == 1) && (a[i + 1][j] == 1) && (a[i][j + 1] == 1))
					{
						T_junction++;
					}
					else if((a[i][j + 1] == 1) && ((a[i - 1][j] == 1) || (a[i + 1][j] == 1)))
					{
						turn++;
					}
					else if(((a[i - 1][j] == 1) && (a[i + 1][j] == 0) && (a[i][j + 1] == 0)) || ((a[i - 1][j] == 0) && (a[i + 1][j] == 1) && (a[i][j + 1] == 0)) || ((a[i - 1][j] == 0) && (a[i + 1][j] == 0) && (a[i][j + 1] == 1)))
					{
						dead_end++;
					}
				}
				else if(!(i - 1 < 0) && !(i + 1 >= n) && j + 1 >= n)
				{
					if((a[i - 1][j] == 1) && (a[i + 1][j] == 1) && (a[i][j - 1] == 1))
					{
						T_junction++;
					}
					else if((a[i][j - 1] == 1) && ((a[i - 1][j] == 1) || (a[i + 1][j] == 1)))
					{
						turn++;
					}
					else if(((a[i - 1][j] == 1) && (a[i + 1][j] == 0) && (a[i][j - 1] == 0)) || ((a[i - 1][j] == 0) && (a[i + 1][j] == 1) && (a[i][j - 1] == 0)) || ((a[i - 1][j] == 0) && (a[i + 1][j] == 0) && (a[i][j - 1] == 1)))
					{
						dead_end++;
					}
				}
				else if(i + 1 >= n && j - 1 < 0)
				{
					if((a[i - 1][j] == 1) && (a[i][j + 1] == 1))
					{
						turn++;
					}
					else if(((a[i - 1][j] == 1) && (a[i][j + 1] == 0)) || ((a[i][j + 1] == 1) && (a[i - 1][j] == 0)))
					{
						dead_end++;
					}
				}
				else if(i + 1 >= n && !(j - 1 < 0) && !(j + 1 >= n))
				{
					if((a[i - 1][j] == 1) && (a[i][j - 1] == 1) && (a[i][j + 1] == 1))
					{
						T_junction++;
					}
					else if((a[i - 1][j] == 1) && ((a[i][j - 1] == 1) || (a[i][j + 1] == 1)))
					{
						turn++;
					}
					else if(((a[i - 1][j] == 1) && (a[i][j - 1] == 0) && (a[i][j + 1] == 0)) || ((a[i - 1][j] == 0) && (a[i][j - 1] == 1) && (a[i][j + 1] == 0)) || ((a[i - 1][j] == 0) && (a[i][j - 1] == 0) && (a[i][j + 1] == 1)))
					{
						dead_end++;
					}
				}
				else if(i + 1 >= n && j + 1 >= n)
				{
					if((a[i - 1][j] == 1) && (a[i][j - 1] == 1))
					{
						turn++;
					}
					else if(((a[i - 1][j] == 1) && (a[i][j - 1] == 0)) || ((a[i][j - 1] == 1) && (a[i - 1][j] == 0)))
					{
						dead_end++;
					}
				}
				else
				{
					if((a[i - 1][j] == 1) && (a[i][j - 1] == 1) && (a[i][j + 1] == 1) && (a[i + 1][j] == 1))
					{
						intersection++;
					}
					else if(((a[i - 1][j] == 1) && (a[i][j - 1] == 1) && (a[i][j + 1] == 1)) || ((a[i][j - 1] == 1) && (a[i][j + 1] == 1) && (a[i + 1][j] == 1)) || ((a[i][j + 1] == 1) && (a[i + 1][j] == 1) && (a[i - 1][j] == 1)) || ((a[i + 1][j] == 1) && (a[i - 1][j] == 1) && (a[i][j - 1] == 1)))
					{
						T_junction++;
					}
					else if(((a[i - 1][j] == 1) && ((a[i][j - 1] == 1) || (a[i][j + 1] == 1))) || ((a[i + 1][j] == 1) && ((a[i][j - 1] == 1) || (a[i][j + 1] == 1))))
					{
						turn++;
					}
					else if(((a[i - 1][j] == 1) && (a[i][j - 1] == 0) && (a[i][j + 1] == 0) && (a[i + 1][j] == 0)) || ((a[i][j - 1] == 1) && (a[i - 1][j] == 0) && (a[i][j + 1] == 0) && (a[i + 1][j] == 0)) || ((a[i][j + 1] == 1) && (a[i - 1][j] == 0) && (a[i][j - 1] == 0) && (a[i + 1][j] == 0)) || ((a[i + 1][j] == 1) && (a[i][j - 1] == 0) && (a[i][j + 1] == 0) && (a[i - 1][j] == 0)))
					{
						dead_end++;
					}
				}
			}
		}
	}
	printf("%d\n", intersection);
	printf("%d\n", T_junction);
	printf("%d\n", turn);
	printf("%d\n", dead_end);
	return 0;
}
#include <stdio.h>

int map[1000][1000] = {0};

int main()
{
	int N, k, x, y;
	scanf("%d %d %d %d", &N, &k, &x, &y);
	int i, j;
	if(k != 1)
	{
		for(i = k;i > 1;i--)
		{
			if(!(x + 1 >= N) && !(y - 1 < 0))
			{
				x++;
				y--;
			}
			else if((x + 1 >= N) && !(y - 1 < 0))
			{
				x = 0;
				y--;
			}
			else if((x + 1 >= N) && (y - 1 < 0))
			{
				x = 0;
				y = N - 1;
			}
			else if(!(x + 1 >= N) && (y - 1 < 0))
			{
				x++;
				y = N - 1;
			}
		}
	}
	map[x][y] = 1;
	int rowindex = x, columnindex = y;
	for(i = 1;i < N * N;i++)
	{
		if(!(rowindex - 1 < 0) && !(columnindex + 1 >= N))
		{
			if(map[rowindex - 1][columnindex + 1] == 0)
			{
				rowindex--;
				columnindex++;
				map[rowindex][columnindex] = i + 1;
			}
			else if(!(rowindex + 1 >= N))
			{
				rowindex++;
				map[rowindex][columnindex] = i + 1;
			}
			else
			{
				rowindex = 0;
				map[rowindex][columnindex] = i + 1;
			}
		}
		else if((rowindex - 1 < 0) && !(columnindex + 1 >= N))
		{
			if((map[N - 1][columnindex + 1] == 0))
			{
				rowindex = N - 1;
				columnindex++;
				map[rowindex][columnindex] = i + 1;
			}
			else if(!(rowindex+1 >= N))
			{
				rowindex++;
				map[rowindex][columnindex] = i + 1;
			}
			else
			{
				rowindex = 0;
				map[rowindex][columnindex] = i + 1;
			}
		}
		else if((rowindex - 1 < 0) && (columnindex + 1 >= N))
		{
			if(map[N - 1][0] == 0)
			{
				rowindex = N - 1;
				columnindex = 0;
				map[rowindex][columnindex] = i + 1;
			}
			else if(!(rowindex+1 >= N))
			{
				rowindex++;
				map[rowindex][columnindex] = i + 1;
			}
			else
			{
				rowindex = 0;
				map[rowindex][columnindex] = i + 1;
			}
		}
		else if(!(rowindex - 1 < 0) && (columnindex + 1 >= N))
		{
			if((map[rowindex - 1][0] == 0))
			{
				rowindex--;
				columnindex = 0;
				map[rowindex][columnindex] = i + 1;
			}
			else if(!(rowindex + 1 >= N))
			{
				rowindex++;
				map[rowindex][columnindex] = i + 1;
			}
			else
			{
				rowindex = 0;
				map[rowindex][columnindex] = i + 1;
			}
		}
	}
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < N - 1;j++)
		{
			printf("%d ", map[i][j]);
		}
		printf("%d\n", map[i][N - 1]);
	}
	return 0;
}
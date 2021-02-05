#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int a[3][3] = {0};
	int x, y;
	int counter = 0;
	int fullcounter = 0;
	int i;
	for(i = 0;i < N;i++)
	{
		scanf("%d %d", &x, &y);
		if(x > 2 || x < 0 || y > 2 || y < 0)
		{
		   continue;
		}
		else if(a[x][y] != 0)
		{
			continue;
		}
		else
		{
			counter++;
			if(counter % 2 == 1)
			{
				a[x][y] = 1;
				fullcounter++;
			}
			else
			{
				a[x][y] = 2;
				fullcounter++;
			}
		}
		if(((a[0][0] == 1) && (a[0][1] == 1) && (a[0][2] == 1)) || ((a[1][0] == 1) && (a[1][1] == 1) && (a[1][2] == 1)) || ((a[2][0] == 1) && (a[2][1] == 1) && (a[2][2] == 1)))
		{
			printf("Black wins.");
			fullcounter = 9;
			break;
		}
		else if(((a[0][0] == 1) && (a[1][0] == 1) && (a[2][0] == 1)) || ((a[0][1] == 1) && (a[1][1] == 1) && (a[2][1] == 1)) || ((a[0][2] == 1) && (a[1][2] == 1) && (a[2][2] == 1)))
		{
			printf("Black wins.");
			fullcounter = 9;
			break;
		}
		else if(((a[0][0] == 1) && (a[1][1] == 1) && (a[2][2] == 1)) || ((a[0][2] == 1) && (a[1][1] == 1) && (a[2][0] == 1)))
		{
			printf("Black wins.");
			fullcounter = 9;
			break;
		}
		else if(((a[0][0] == 2) && (a[0][1] == 2) && (a[0][2] == 2)) || ((a[1][0] == 2) && (a[1][1] == 2) && (a[1][2] == 2)) || ((a[2][0] == 2) && (a[2][1] == 2) && (a[2][2] == 2)))
		{
			printf("White wins.");
			fullcounter = 9;
			break;
		}
		else if(((a[0][0] == 2) && (a[1][0] == 2) && (a[2][0] == 2)) || ((a[0][1] == 2) && (a[1][1] == 2) && (a[2][1] == 2)) || ((a[0][2] == 2) && (a[1][2] == 2) && (a[2][2] == 2)))
		{
			printf("White wins.");
			fullcounter = 9;
			break;
		}
		else if(((a[0][0] == 2) && (a[1][1] == 2) && (a[2][2] == 2)) || ((a[0][2] == 2) && (a[1][1] == 2) && (a[2][0] == 2)))
		{
			printf("White wins.");
			fullcounter = 9;
			break;
		}
		else
		{
			if(fullcounter == 9)
			{
				printf("There is a draw.");
				break;
			}
		}
	}
	if(fullcounter != 9)
	{
		printf("There is a draw.");
	}
	return 0;
}
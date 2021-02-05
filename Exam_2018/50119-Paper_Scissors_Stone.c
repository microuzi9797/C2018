#include <stdio.h>

int main()
{
	int x, a, b, c;
	int y, d, e, f;
	scanf("%d %d %d %d", &x, &a, &b, &c);
	scanf("%d %d %d %d", &y, &d, &e, &f);
	int N;
	scanf("%d", &N);
	int i;
	int x_tool, y_tool;
	for(i = 1;i <= N;i++)
	{
		int counter = 0;
		do
		{
			counter++;
			x_tool = x % 3;
			y_tool = y % 3;
			if(x_tool == 0 && y_tool == 2)
			{
				printf("0 %d\n", counter);
			}
			else if(x_tool == 2 && y_tool == 0)
			{
				printf("1 %d\n", counter);
			}
			else if(x_tool > y_tool)
			{
				printf("0 %d\n", counter);
			}
			else if(x_tool < y_tool)
			{
				printf("1 %d\n", counter);
			}
			x = (a * x + b) % c;
			y = (d * y + e) % f;
		}while(x_tool == y_tool);
	}
	return 0;
}
#include <stdio.h>

int main()
{
	int x[100] = {0}, y[100] = {0};
	int counter = 0;
	while(scanf("%d %d", &x[counter], &y[counter]) != EOF)
	{
		counter++;
	}
	int i;
	int x_max = -10000, x_min = 10000;
	int y_max = -10000, y_min = 10000;
	for(i = 0;i < counter;i++)
	{
		if(x[i] > x_max)
		{
			x_max = x[i];
		}
		if(x[i] < x_min)
		{
			x_min = x[i];
		}
		if(y[i] > y_max)
		{
			y_max = y[i];
		}
		if(y[i] < y_min)
		{
			y_min = y[i];
		}
	}
	int l, w;
	int area;
	l = x_max - x_min;
	w = y_max - y_min;
	area = l * w;
	printf("%d", area);
	return 0;
}
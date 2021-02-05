#include <stdio.h>

int ways(int r, int c);

int main()
{
	int r, c;
	scanf("%d %d", &r, &c);
	printf("%d", ways(r - 1, c - 1));
	return 0;
}

int ways(int r, int c)
{
	if(r < 0 || c < 0)
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
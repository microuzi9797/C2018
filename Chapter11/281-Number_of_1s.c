#include <stdio.h>
#include <math.h>

int main()
{
	unsigned int n;
	int i;
	while(scanf("%d", &n) != EOF)
	{
		int test;
		int count = 0;
		for(i = 0;i < 32;i++)
		{
			test = (1 << i);
			if(n & test)
			{
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
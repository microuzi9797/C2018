#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		int test;
		int i;
		int count = 0;
		int max = 0;
		for(i = 0;i < 32;i++)
		{
			test = (1 << i);
			if(n & test)
			{
				count++;
				if(count > max)
				{
					max = count;
				}
			}
			else
			{
				if(count > max)
				{
					max = count;
				}
				count = 0;
			}
		}
		printf("%d\n", max);
	}
	return 0;
}
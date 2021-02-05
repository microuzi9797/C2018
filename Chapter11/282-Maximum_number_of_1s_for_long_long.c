#include <stdio.h>

int main()
{
	unsigned long long n;
	int i;
	unsigned long long test;
	while(scanf("%llu", &n) != EOF)
	{
		int count = 0;
		for(i = 0;i < 64;i++)
		{
			test = (n >> i);
			if(test & 1)
			{
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
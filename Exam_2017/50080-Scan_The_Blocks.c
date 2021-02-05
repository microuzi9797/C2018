#include <stdio.h>

main()
{
	int n;
	int i;
	int number;
	int max, min;
	int ret;
	while(ret = scanf("%d", &n))
	{
		max = -10000;
		min = 10000;
		if(ret == EOF)
		{
			break;
		}
		for(i = 1;i <= n;i++)
		{
			if(ret = scanf("%d", &number))
			{
				if(number >= max)
				{
					max = number;
				}
				if(number <= min)
				{
					min = number;
				}
				if(ret == EOF)
				{
					break;
				}
			}
		}
		if(ret == EOF)
		{
			printf("%d\n", min);
			break;
		}
		else
		{
			printf("%d\n", max);
		}
	}
}
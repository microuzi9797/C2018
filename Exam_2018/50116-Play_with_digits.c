#include <stdio.h>

main()
{
	int number;
	int counter = 0;
	int ret;
	int zero_counter = 0;
	int sum1 = 0, sum2 = 0;
	int div;
	while(ret = scanf("%d", &number))
	{
		if(ret == EOF)
		{
			break;
		}
		counter++;
		if(number == 0)
		{
			zero_counter++;
		}
		if(counter % 2 == 1)
		{
			sum1 += number;
		}
		else
		{
			sum2 += number;
		}
		if(sum1 >= sum2)
		{
			div = sum1-sum2;
		}
		else
		{
			div = sum2-sum1;
		}
	}
	printf("%d\n", counter);
	if(number % 2 == 0)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	printf("%d\n", zero_counter);
	if(counter == 1)
	{
		printf("0\n");
	}
	else
	{
		if(div % 11 == 0)
		{
		printf("1\n");
		}
		else
		{
		printf("0\n");
		}
	}
}
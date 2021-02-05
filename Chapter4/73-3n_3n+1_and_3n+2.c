#include <stdio.h>

main()
{
	int n;
	scanf("%d", &n);
	int i;
	int a = 0, b = 0, c = 0;
	for(i = 1;i <= n;i++)
	{
		int integer;
		scanf("%d", &integer);
		int remainder;
		remainder = integer % 3;
		switch(remainder)
		{
			case 0:
				a++;
				break;
			case 1:
				b++;
				break;
			default:
				c++;
				break;
		}
	}
	printf("%d ", a);
	printf("%d ", b);
	printf("%d", c);
}
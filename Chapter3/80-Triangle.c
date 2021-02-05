#include <stdio.h>

main()
{
	int n;
	scanf("%d", &n);
	int i;
	for(i = 1;i <= n;i++)
	{
		int x1, y1, x2, y2, x3, y3;
		scanf("%d", &x1);
		scanf("%d", &y1);
		scanf("%d", &x2);
		scanf("%d", &y2);
		scanf("%d", &x3);
		scanf("%d", &y3);
		int a2, b2, c2;
		a2 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		b2 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
		c2 = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);
		if((a2 == b2) || (b2 == c2) || (c2 == a2))
		{
			printf("isosceles\n");
		}
		else
		{
			if((a2 + b2 == c2) || (b2 + c2 == a2) || (c2 + a2 == b2))
			{
				printf("right\n");
			}
			else if((a2 + b2 < c2) || (b2 + c2 < a2) || (c2 + a2 < b2))
			{
				printf("obtuse\n");
			}
			else
			{
				printf("acute\n");
			}
		}
	}
}
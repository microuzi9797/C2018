#include <stdio.h>

main()
{
	int N, M;
	scanf("%d", &N);
	scanf("%d", &M);
	int x, y;
	x = 0;
	y = 0;
	printf("%d\n%d\n", x, y);
	int n;
	while(scanf("%d", &n) != EOF)
	{
		if((n % 5 == 1) && (x + n < N))
		{
			x += n;
			printf("%d\n%d\n", x, y);
		}
		else if((n % 5 == 2) && (x - n >= 0))
		{
			x -= n;
			printf("%d\n%d\n", x, y);
		}
		else if((n % 5 == 3) && (y + n < M))
		{
			y += n;
			printf("%d\n%d\n", x, y);
		}
		else if((n % 5 == 4) && (y - n >= 0))
		{
			y -= n;
			printf("%d\n%d\n", x, y);
		}
	}
}
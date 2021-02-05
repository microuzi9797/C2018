#include <stdio.h>

main()
{
	int x;
	scanf("%d", &x);
	int fd, sd, td;
	fd = x / 100;
	sd = (x % 100) / 10;
	td = x % 10;
	printf("%d\n", fd);
	printf("%d\n", sd);
	printf("%d", td);
}
#include <stdio.h>

main()
{
	int a, b, c;
	int k;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	k = ((a + b > c) && (a + c > b) && (b + c > a));
	printf("%d", k);
}
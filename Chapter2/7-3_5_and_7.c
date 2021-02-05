#include <stdio.h>

main()
{
	int x;
	int k;
	scanf("%d", &x);
	k = ((x % 3 != 0) || (x % 5 != 0) || (x % 7 == 0));
	printf("%d", k);
}
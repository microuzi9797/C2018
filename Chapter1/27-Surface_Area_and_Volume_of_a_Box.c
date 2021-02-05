#include <stdio.h>

main()
{
	int a, b, c, d, e;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	int area, volume;
	area = (a * b + a * c + b * c) * 2 + ((a - 2 * e) * d + (b - 2 * e) * d + (c - 2 * e) * d) * 8;
	volume = a * b * c - ((a - 2 * e) * (b - 2 * e) * d + (a - 2 * e) * (c - 2 * e) * d + (b - 2 * e) * (c - 2 * e) * d) * 2;
	printf("%d\n", area);
	printf("%d", volume);
}
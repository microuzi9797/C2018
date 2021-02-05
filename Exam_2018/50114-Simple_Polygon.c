#include <stdio.h>

main()
{
	int a, b, c, d, e, f, g, h;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	scanf("%d", &f);
	scanf("%d", &g);
	scanf("%d", &h);
	int primeter, area;
	primeter = (c - a) + (d - b) + (e - c) + (f - d) + (e - g) + (f - h) + (g - a) + (h - b);
	area = (e - a) * (f - b) - (g - a) * (f - h) - (e - c) * (d - b);
	printf("%d\n", primeter);
	printf("%d", area);
}
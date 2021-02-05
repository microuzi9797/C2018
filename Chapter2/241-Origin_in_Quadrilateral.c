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
	int cp1, cp2, cp3, cp4;
	cp1 = a * d - b * c;
	cp2 = c * f - d * e;
	cp3 = e * h - f * g;
	cp4 = g * b - h * a;
	int k;
	k = ((cp1 > 0) && (cp2 > 0) && (cp3 > 0) && (cp4 > 0));
	printf("%d",k);
}
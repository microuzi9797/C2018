#include <stdio.h>

main()
{
	int h, w, d;
	scanf("%d", &h);
	scanf("%d", &w);
	scanf("%d", &d);
	int area, volume;
	area = (h * w + h * d + w * d) * 2;
	volume = h * w * d;
	printf("%d\n", area);
	printf("%d", volume);
}
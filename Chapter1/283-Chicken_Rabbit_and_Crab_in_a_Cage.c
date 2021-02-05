#include <stdio.h>

main()
{
	int s, f, t;
	scanf("%d", &s);
	scanf("%d", &f);
	scanf("%d", &t);
	int chicken, rabbit, crab;
	crab = s - t;
	rabbit = (f - 2 * s - 6 * crab) / 2;
	chicken = t - rabbit;
	printf("%d\n", chicken);
	printf("%d\n", rabbit);
	printf("%d", crab);
}
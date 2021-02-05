#include <stdio.h>
#include <stdlib.h>

main()
{
	int arrival, a, b;
	int A_last_ready = 0, B_last_ready = 0;
	int A_last = 0, B_last = 0;
	while(scanf("%d%d%d", &arrival, &a, &b) != EOF)
	{
		int A_start;
		if(A_last_ready + A_last > arrival)
		{
			A_start = A_last_ready + A_last;
		}
		else
		{
			A_start = arrival;
		}
		int B_start;
		if(B_last_ready + B_last > A_start+a)
		{
			B_start = B_last_ready + B_last;
		}
		else
		{
			B_start = A_start + a;
		}
		int final = B_start + b;
		printf("%d\n", final);
		A_last_ready = A_start;
		B_last_ready = B_start;
		A_last = a;
		B_last = b;
	}
}
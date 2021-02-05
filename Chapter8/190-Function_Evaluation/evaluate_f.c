#include <limits.h>

int evaluate_f(int *iptr[], int n, int *index)
{
	int i;
	int max = INT_MIN;
	int f, x, y;
	for(i = 0;i < n;i++)
	{
		x = *iptr[i];
		y = *(iptr[i] + 1);
		f = 4 * x - 6 * y;
		if(f > max)
		{
			max = f;
			*index = i;
		}
	}
	return max;
}
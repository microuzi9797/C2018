#include <limits.h>

int max(int *iptr[], int n)
{
	int i;
	int ans = INT_MIN;
	for(i = 0;i < n;i++)
	{
		if(*iptr[i] > ans)
		{
			ans = *iptr[i];
		}
	}
	return ans;
}
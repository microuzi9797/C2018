#include <limits.h>

void place(int bucket[1024], int N, int ball[16384], int M, int method, int result[16384])
{
	int i, j;
	for(i = 0;i < M;i++)
	{
		result[i] = -1;
	}
	int index;
	if(method == 0)
	{
		for(i = 0;i < M;i++)
		{
			for(j = 0;j < N;j++)
			{
				if(ball[i] <= bucket[j])
				{
					bucket[j] -= ball[i];
					result[i] = j;
					break;
				}
			}
		}
	}
	else if(method == 1)
	{
		int min = INT_MAX;
		for(i = 0;i < M;i++)
		{
			for(j = 0;j < N;j++)
			{
				if(ball[i] <= bucket[j] && bucket[j] < min)
				{
					min = bucket[j];
					index = j;
				}
			}
			if(min != INT_MAX)
			{
				bucket[index] -= ball[i];
				result[i] = index;
				min = INT_MAX;
			}
		}
	}
	else if(method == 2)
	{
		int max = INT_MIN;
		for(i = 0;i < M;i++)
		{
			for(j = 0;j < N;j++)
			{
				if(ball[i] <= bucket[j] && bucket[j] >= max)
				{
					max = bucket[j];
					index = j;
				}
			}
			if(max != INT_MIN)
			{
				bucket[index] -= ball[i];
				result[i] = index;
				max = INT_MIN;
			}
		}
	}
}
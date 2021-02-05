#include <limits.h>

int max(int array[5][5])
{
	int max_number = INT_MIN;
	int i, j;
	for(i = 0;i < 5;i++)
	{
		for(j = 0;j < 5;j++)
		{
			if(array[i][j] > max_number)
			{
				max_number = array[i][j];
			}
		}
	}
	return max_number;
}
void posneg(int array[5][5], int result[2])
{
	int i, j;
	for(i = 0;i < 2;i++)
	{
		result[i] = 0;
	}
	for(i = 0;i < 5;i++)
	{
		for(j = 0;j < 5;j++)
		{
			if(array[i][j] < 0)
			{
				result[0]++;
			}
			else if(array[i][j] > 0)
			{
				result[1]++;
			}
		}
	}
}
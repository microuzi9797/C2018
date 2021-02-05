void intersection(int map[100][100], int result[4])
{
	int i, j;
	for(i = 0;i < 4;i++)
	{
		result[i] = 0;
	}
	for(i = 0;i < 100;i++)
	{
		for(j = 0;j < 100;j++)
		{
			if(map[i][j] == 1)
			{
				if(i - 1 < 0 && j - 1 < 0)
				{
					if((map[i + 1][j] == 1) && (map[i][j + 1] == 1))
					{
						result[2]++;
					}
					else if(((map[i + 1][j] == 1) && (map[i][j + 1] == 0)) || ((map[i][j + 1] == 1) && (map[i + 1][j] == 0)))
					{
						result[3]++;
					}
				}
				else if(i - 1 < 0 && !(j - 1 < 0) && !(j + 1 >= 100))
				{
					if((map[i + 1][j] == 1) && (map[i][j - 1] == 1) && (map[i][j + 1] == 1))
					{
						result[1]++;
					}
					else if((map[i + 1][j] == 1) && ((map[i][j - 1] == 1) || (map[i][j + 1] == 1)))
					{
						result[2]++;
					}
					else if(((map[i + 1][j] == 1) && (map[i][j - 1] == 0) && (map[i][j + 1] == 0)) || ((map[i + 1][j] == 0) && (map[i][j - 1] == 1) && (map[i][j + 1] == 0) || ((map[i + 1][j] == 0) && (map[i][j - 1] == 0) && (map[i][j + 1] == 1))))
					{
						result[3]++;
					}
				}
				else if(i - 1 < 0 && j + 1 >= 100)
				{
					if((map[i + 1][j] == 1) && (map[i][j - 1] == 1))
					{
						result[2]++;
					}
					else if(((map[i + 1][j] == 1) && (map[i][j - 1] == 0)) || ((map[i][j - 1] == 1) && (map[i + 1][j] == 0)))
					{
						result[3]++;
					}
				}
				else if(!(i - 1 < 0) && !(i + 1 >= 100) && j - 1 < 0)
				{
					if((map[i - 1][j] == 1) && (map[i + 1][j] == 1) && (map[i][j + 1] == 1))
					{
						result[1]++;
					}
					else if((map[i][j + 1] == 1) && ((map[i - 1][j] == 1) || (map[i + 1][j] == 1)))
					{
						result[2]++;
					}
					else if(((map[i - 1][j] == 1) && (map[i + 1][j] == 0) && (map[i][j + 1] == 0)) || ((map[i - 1][j] == 0) && (map[i + 1][j] == 1) && (map[i][j + 1] == 0)) || ((map[i - 1][j] == 0) && (map[i + 1][j] == 0) && (map[i][j + 1] == 1)))
					{
						result[3]++;
					}
				}
				else if(!(i - 1 < 0) && !(i + 1 >= 100) && j + 1 >= 100)
				{
					if((map[i - 1][j] == 1) && (map[i + 1][j] == 1) && (map[i][j - 1] == 1))
					{
						result[1]++;
					}
					else if((map[i][j - 1] == 1) && ((map[i - 1][j] == 1) || (map[i + 1][j] == 1)))
					{
						result[2]++;
					}
					else if(((map[i - 1][j] == 1) && (map[i + 1][j] == 0) && (map[i][j - 1] == 0)) || ((map[i - 1][j] == 0) && (map[i + 1][j] == 1) && (map[i][j - 1] == 0)) || ((map[i - 1][j] == 0) && (map[i + 1][j] == 0) && (map[i][j - 1] == 1)))
					{
						result[3]++;
					}
				}
				else if(i + 1 >= 100 && j - 1 < 0)
				{
					if((map[i - 1][j] == 1) && (map[i][j + 1] == 1))
					{
						result[2]++;
					}
					else if(((map[i - 1][j] == 1) && (map[i][j + 1] == 0)) || ((map[i][j + 1] == 1) && (map[i - 1][j] == 0)))
					{
						result[3]++;
					}
				}
				else if(i + 1 >= 100 && !(j - 1 < 0) && !(j + 1 >= 100))
				{
					if((map[i - 1][j] == 1) && (map[i][j - 1] == 1) && (map[i][j + 1] == 1))
					{
						result[1]++;
					}
					else if((map[i - 1][j] == 1) && ((map[i][j - 1] == 1) || (map[i][j + 1] == 1)))
					{
						result[2]++;
					}
					else if(((map[i - 1][j] == 1) && (map[i][j - 1] == 0) && (map[i][j + 1] == 0)) || ((map[i - 1][j] == 0) && (map[i][j - 1] == 1) && (map[i][j + 1] == 0)) || ((map[i - 1][j] == 0) && (map[i][j - 1] == 0) && (map[i][j + 1] == 1)))
					{
						result[3]++;
					}
				}
				else if(i + 1 >= 100 && j + 1 >= 100)
				{
					if((map[i - 1][j] == 1) && (map[i][j - 1] == 1))
					{
						result[2]++;
					}
					else if(((map[i - 1][j] == 1) && (map[i][j - 1] == 0)) || ((map[i][j - 1] == 1) && (map[i - 1][j] == 0)))
					{
						result[3]++;
					}
				}
				else
				{
					if((map[i - 1][j] == 1) && (map[i][j - 1] == 1) && (map[i][j + 1] == 1) && (map[i + 1][j] == 1))
					{
						result[0]++;
					}
					else if(((map[i - 1][j] == 1) && (map[i][j - 1] == 1) && (map[i][j + 1] == 1)) || ((map[i][j - 1] == 1) && (map[i][j + 1] == 1) && (map[i + 1][j] == 1)) || ((map[i][j + 1] == 1) && (map[i + 1][j] == 1) && (map[i - 1][j] == 1)) || ((map[i + 1][j] == 1) && (map[i - 1][j] == 1) && (map[i][j - 1] == 1)))
					{
						result[1]++;
					}
					else if(((map[i - 1][j] == 1) && ((map[i][j - 1] == 1) || (map[i][j + 1] == 1))) || ((map[i + 1][j] == 1) && ((map[i][j - 1] == 1) || (map[i][j + 1] == 1))))
					{
						result[2]++;
					}
					else if(((map[i - 1][j] == 1) && (map[i][j - 1] == 0) && (map[i][j + 1] == 0) && (map[i + 1][j] == 0)) || ((map[i][j - 1] == 1) && (map[i - 1][j] == 0) && (map[i][j + 1] == 0) && (map[i + 1][j] == 0)) || ((map[i][j + 1] == 1) && (map[i - 1][j] == 0) && (map[i][j - 1] == 0) && (map[i + 1][j] == 0)) || ((map[i + 1][j] == 1) && (map[i][j - 1] == 0) && (map[i][j + 1] == 0) && (map[i - 1][j] == 0)))
					{
						result[3]++;
					}
				}
			}
		}
	}
}
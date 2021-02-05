#include <stdio.h>

main()
{
	int year, month, start_whatday;
	scanf("%d", &year);
	scanf("%d", &month);
	scanf("%d", &start_whatday);
	int whatday;
	int Febday;
	int i;
	int j;
	if(year < 1000 || year > 3000 || month < 1 || month > 12 || start_whatday < 0 || start_whatday > 6)
	{
		printf("invalid\n");
	}
	else
	{
		printf(" Su Mo Tu We Th Fr Sa\n");
		printf("=====================\n");
		for(i = 0;i < start_whatday;i++)
		{
			printf("   ");
		}
		if(month == 1)
		{
			for(j = 1;j <= 31;j++)
			{
				whatday = (start_whatday + j - 1) % 7;
				if(whatday == 6 || j == 31)
				{
					printf("%3d\n", j);
				}
				else
				{
					printf("%3d", j);
				}
			}
		}
		else if(month == 3)
		{
			for(j = 1;j <= 31;j++)
			{
				whatday = (start_whatday + j - 1) % 7;
				if(whatday == 6 || j == 31)
				{
					printf("%3d\n", j);
				}
				else
				{
					printf("%3d", j);
				}
			}
		}
		else if(month == 4)
		{
			for(j = 1;j <= 30;j++)
			{
				whatday = (start_whatday + j - 1) % 7;
				if(whatday == 6 || j == 30)
				{
					printf("%3d\n", j);
				}
				else
				{
					printf("%3d", j);
				}
			}
		}
		else if(month == 5)
		{
			for(j = 1;j <= 31;j++)
			{
				whatday = (start_whatday + j - 1) % 7;
				if(whatday == 6 || j == 31)
				{
					printf("%3d\n", j);
				}
				else
				{
					printf("%3d", j);
				}
			}
		}
		else if(month == 6)
		{
			for(j = 1;j <= 30;j++)
			{
				whatday = (start_whatday + j - 1) % 7;
				if(whatday == 6 || j == 30)
				{
					printf("%3d\n", j);
				}
				else
				{
					printf("%3d", j);
				}
			}
		}
		else if(month == 7)
		{
			for(j = 1;j <= 31;j++)
			{
				whatday = (start_whatday + j - 1) % 7;
				if(whatday == 6 || j == 31)
				{
					printf("%3d\n", j);
				}
				else
				{
					printf("%3d", j);
				}
			}
		}
		else if(month == 8)
		{
			for(j = 1;j <= 31;j++)
			{
				whatday = (start_whatday + j - 1) % 7;
				if(whatday == 6 || j == 31)
				{
					printf("%3d\n", j);
				}
				else
				{
					printf("%3d", j);
				}
			}
		}
		else if(month == 9)
		{
			for(j = 1;j <= 30;j++)
			{
				whatday = (start_whatday + j - 1) % 7;
				if(whatday == 6 || j == 30)
				{
					printf("%3d\n", j);
				}
				else
				{
					printf("%3d", j);
				}
			}
		}
		else if(month == 10)
		{
			for(j = 1;j <= 31;j++)
			{
				whatday = (start_whatday + j - 1) % 7;
				if(whatday == 6 || j == 31)
				{
					printf("%3d\n", j);
				}
				else
				{
					printf("%3d", j);
				}
			}
		}
		else if(month == 11)
		{
			for(j = 1;j <= 30;j++)
			{
				whatday = (start_whatday + j - 1) % 7;
				if(whatday == 6 || j == 30)
				{
					printf("%3d\n", j);
				}
				else
				{
					printf("%3d", j);
				}
			}
		}
		else if(month == 12)
		{
			for(j = 1;j <= 31;j++)
			{
				whatday = (start_whatday + j - 1) % 7;
				if(whatday == 6 || j == 31)
				{
					printf("%3d\n", j);
				}
				else
				{
					printf("%3d", j);
				}
			}
		}
		else
		{
			if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
			{
				Febday = 29;
			}
			else
			{
				Febday = 28;
			}
			for(j = 1;j <= Febday;j++)
			{
				whatday = (start_whatday + j - 1) % 7;
				if(whatday == 6||j == Febday)
				{
					printf("%3d\n", j);
				}
				else
				{
					printf("%3d", j);
				}
			}
		}
		printf("=====================\n");
	}
}
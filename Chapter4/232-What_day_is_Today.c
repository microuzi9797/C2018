#include <stdio.h>

main()
{
	int year, start_whatday;
	scanf("%d", &year);
	scanf("%d", &start_whatday);
	int n;
	scanf("%d", &n);
	int Febday;
	if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
	{
		Febday = 29;
	}
	else
	{
		Febday = 28;
	}
	int month, day;
	int i;
	for(i = 1;i <= n;i++)
	{
		scanf("%d", &month);
		scanf("%d", &day);
		int whatday;
		if(month > 12 || month < 1)
		{
			whatday = -1;
			printf("%d\n", whatday);
		}
		else
		{
			if(month == 1)
			{
				if(day > 31 || day < 1)
				{
					whatday = -2;
					printf("%d\n", whatday);
				}
				else
				{
					whatday = (((day - 1) % 7) + start_whatday) % 7;
					printf("%d\n", whatday);
				}
			}
			if(month == 2)
			{
				if(day > Febday || day < 1)
				{
					whatday = -2;
					printf("%d\n", whatday);
				}
				else
				{
					whatday = (((day + 31 - 1) % 7) + start_whatday) % 7;
					printf("%d\n", whatday);
				}
			}
			if(month == 3)
			{
				if(day > 31 || day < 1)
				{
					whatday = -2;
					printf("%d\n", whatday);
				}
				else
				{
					whatday = (((day + 31 + Febday - 1) % 7) + start_whatday) % 7;
					printf("%d\n", whatday);
				}
			}
			if(month == 4)
			{
				if(day > 30 || day < 1)
				{
					whatday = -2;
					printf("%d\n", whatday);
				}
				else
				{
					whatday = (((day + 31 + Febday + 31 - 1) % 7) + start_whatday) % 7;
					printf("%d\n", whatday);
				}
			}
			if(month == 5)
			{
				if(day > 31 || day < 1)
				{
					whatday = -2;
					printf("%d\n", whatday);
				}
				else
				{
					whatday = (((day + 31 + Febday + 31 + 30 - 1) % 7) + start_whatday) % 7;
					printf("%d\n", whatday);
				}
			}
			if(month == 6)
			{
				if(day > 30 || day < 1)
				{
					whatday = -2;
					printf("%d\n", whatday);
				}
				else
				{
					whatday = (((day + 31 + Febday + 31 + 30 + 31 - 1) % 7) + start_whatday) % 7;
					printf("%d\n", whatday);
				}
			}
			if(month == 7)
			{
				if(day > 31 || day < 1)
				{
					whatday = -2;
					printf("%d\n", whatday);
				}
				else
				{
					whatday = (((day + 31 + Febday + 31 + 30 + 31 + 30 - 1) % 7) + start_whatday) % 7;
					printf("%d\n", whatday);
				}
			}
			if(month == 8)
			{
				if(day > 31 || day < 1)
				{
					whatday = -2;
					printf("%d\n", whatday);
				}
				else
				{
					whatday = (((day + 31 + Febday + 31 + 30 + 31 + 30 + 31 - 1) % 7) + start_whatday) % 7;
					printf("%d\n", whatday);
				}
			}
			if(month == 9)
			{
				if(day > 30 || day < 1)
				{
					whatday = -2;
					printf("%d\n", whatday);
				}
				else
				{
					whatday = (((day + 31 + Febday + 31 + 30 + 31 + 30 + 31 + 31 - 1) % 7) + start_whatday) % 7;
					printf("%d\n", whatday);
				}
			}
			if(month == 10)
			{
				if(day > 31 || day < 1)
				{
					whatday = -2;
					printf("%d\n", whatday);
				}
				else
				{
					whatday = (((day + 31 + Febday + 31 + 30 + 31 + 30 + 31 + 31 + 30 - 1) % 7) + start_whatday) % 7;
					printf("%d\n", whatday);
				}
			}
			if(month == 11)
			{
				if(day > 30 || day < 1)
				{
					whatday = -2;
					printf("%d\n", whatday);
				}
				else
				{
					whatday = (((day + 31 + Febday + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 - 1) % 7) + start_whatday) % 7;
					printf("%d\n", whatday);
				}
			}
			if(month == 12)
			{
				if(day > 31 || day < 1)
				{
					whatday = -2;
					printf("%d\n", whatday);
				}
				else
				{
					whatday = (((day + 31 + Febday + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 - 1) % 7) + start_whatday) % 7;
					printf("%d\n", whatday);
				}
			}
		}
	}
}
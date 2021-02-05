#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i, j;
	char s[n][2][80];
	int length[n][2];
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < 2;j++)
		{
			scanf("%s", s[i][j]);
			length[i][j] = strlen(s[i][j]);
		}
	}
	char *ptr[2];
	char *temp;
	for(i = 0;i < n;i++)
	{
		int flag = 0;
		ptr[0] = s[i][0];
		ptr[1] = s[i][1];
		if(length[i][0] == length[i][1])
		{
			while(*ptr[0] != '\0')
			{
				if(*ptr[0] == *ptr[1])
				{
					ptr[0]++;
					ptr[1]++;
					continue;
				}
				else if(*ptr[0] == *(ptr[1] + 1) && *(ptr[0] + 1) == *ptr[1] && flag == 0)
				{
					flag = 1;
					ptr[0] += 2;
					ptr[1] += 2;
				}
				else
				{
					flag = 2;
					printf("no\n");
					break;
				}
			}
			if(flag < 2)
			{
				printf("yes\n");
			}
		}
		else if(fabs(length[i][0] - length[i][1]) == 1)
		{
			if(length[i][0] > length[i][1])
			{
				temp = ptr[0];
				ptr[0] = ptr[1];
				ptr[1] = temp;
			}
			while(*ptr[0] != '\0')
			{
				if(*ptr[0] == *ptr[1])
				{
					ptr[0]++;
					ptr[1]++;
					continue;
				}
				else if(*ptr[0] == *(ptr[1] + 1) && flag == 0)
				{
					flag = 1;
					ptr[0]++;
					ptr[1] += 2;
				}
				else
				{
					flag = 2;
					printf("no\n");
					break;
				}
			}
			if(flag < 2)
			{
				printf("yes\n");
			}
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}
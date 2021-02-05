#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char s[128];
	char ans[128];
	int length1, length2;
	scanf("%s", ans);
	int i, j;
	char *point;
	while(scanf("%s", s) != EOF)
	{
		length1 = strlen(ans);
		length2 = strlen(s);
		point = ans + length1;
		for(i = 0;i < fmin(length1, length2);i++)
		{
			for(j = 0;j <= i;j++)
			{
				if(s[j] != ans[length1 - i - 1 + j])
				{
					break;
				}
			}
			if(j == i + 1)
			{
				point = ans + length1 - i - 1;
			}
		}
		*point = '\0';
		strcat(ans, s);
	}
	printf("%s", ans);
	return 0;
}
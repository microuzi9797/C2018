#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char s[128];
	char abb[128];
	int count = 0;
	int i;

	while(scanf("%s", s) != EOF)
	{
		if(strcmp(s, "of") == 0 || strcmp(s, "and") == 0 || strcmp(s, "the") == 0 || strcmp(s, "at") == 0)
		{
			continue;
		}
		if(!(strcmp(s, "of.") == 0 || strcmp(s, "and.") == 0 || strcmp(s, "the.") == 0 || strcmp(s, "at.") == 0))
		{
			abb[count] = toupper(s[0]);
			count++;
		}
		if(s[strlen(s) - 1] == '.')
		{
			for(i = 0;i < count;i++)
			{
				printf("%c", abb[i]);
			}
			printf("\n");
			count = 0;
		}
	}
}
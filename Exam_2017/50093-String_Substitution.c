#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[1024];
	char instruction[1007];
	char delimiter[2];
	char A[501];
	char B[501];
	scanf("%s", s);
	while(scanf("%s", instruction) != EOF)
	{
		if(strlen(instruction) == 1 && instruction[0] == 'p')
		{
			printf("%s\n", s);
			continue;
		}
		strncpy(delimiter, &instruction[1], 1);
		delimiter[1] = '\0';
		char *ptr;
		ptr = strtok(&instruction[1], delimiter);
		int i;
		for(i = 0; i < 2 && ptr != NULL; i++)
		{
			if(i > 0)
			{
				strcpy(B, ptr);
			}
			else
			{
				strcpy(A, ptr);
			}
			ptr = strtok(NULL, delimiter);
		}
		if (strcmp(A, B) == 0)
		{
			continue;
		}
		ptr = strstr(s, A);
		if (ptr != NULL)
		{
			if (strlen(A) == strlen(B))
			{
				strncpy(ptr, B, strlen(B));
			}
			else
			{
				strcpy(ptr + strlen(B), ptr + strlen(A));
				strncpy(ptr, B, strlen(B));
			}
		}
	}
	return 0;
}
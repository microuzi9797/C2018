#include <stdio.h>

int main()
{
	int choose;
	scanf("%d", &choose);
	char pattern[5];
	if(choose == 0)
	{
		while(scanf("%s", pattern) != EOF)
		{
			unsigned long long int ULLI = 0;
			unsigned int UI;
			scanf("%u", &UI);
			unsigned short US;
			scanf("%hu", &US);
			char c[3];
			scanf("%s", c);

			int count = 0;
			int i;
			int now = 0;
			for(i = 0;i < 4;i++)
			{
				unsigned long long int put;
				if(pattern[i] == 'L')
				{
					put = UI;
					ULLI |= (put << 8 * (4 - now));
					now += 4;
				}
				else if(pattern[i] == 'S')
				{
					put = US;
					ULLI |= (put << 8 * (6 - now));
					now += 2;
				}
				else if(pattern[i] == 'C' && count == 0)
				{
					put = c[0];
					ULLI |= (put << 8 * (7 - now));
					now += 1;
					count  = 1;
				}
				else if(pattern[i] == 'C' && count == 1)
				{
					put = c[1];
					ULLI |= (put << 8 * (7 - now));
					now += 1;
				}
			}
			printf("%llu\n", ULLI);
		}
	}
	else if(choose == 1)
	{
		while(scanf("%s", pattern) != EOF)
		{
			unsigned long long int ULLI;
			scanf("%llu", &ULLI);

			unsigned int UI;
			unsigned short US;
			char c[3];

			int count = 0;
			int i;
			int now = 0;
			for(i = 0;i < 4;i++)
			{
				if(pattern[i] == 'L')
				{
					now += 4;
					UI = (ULLI >> 8 * (8 - now));
				}
				else if(pattern[i] == 'S')
				{
					now += 2;
					US = (ULLI >> 8 * (8 - now));
				}
				else if(pattern[i] == 'C' && count == 0)
				{
					now += 1;
					c[0] = (ULLI >> 8 * (8 - now));
					count  = 1;
				}
				else if(pattern[i] == 'C' && count == 1)
				{
					now += 1;
					c[1] = (ULLI >> 8 * (8 - now));
				}
			}
			printf("%u %hu %c%c\n", UI, US, c[0], c[1]);
		}
	}
	return 0;
}
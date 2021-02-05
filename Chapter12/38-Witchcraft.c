#include <stdio.h>

void make(unsigned long long int now_a, unsigned long long int now_b, unsigned long long int now_c);

unsigned long long int D, a, b, c, A, B, C;

int main()
{
	int i;
	int N;
	scanf("%d", &N);
	for(i = 0;i < N;i++)
	{
		scanf("%llu %llu %llu %llu %llu %llu %llu", &D, &a, &b, &c, &A, &B, &C);
		make(0, 0, 0);
	}
	return 0;
}

void make(unsigned long long int now_a, unsigned long long int now_b, unsigned long long int now_c)
{
	unsigned long long int next_a, next_b, next_c;
	if(D == now_a * A + now_b * B + now_c * C)
	{
		printf("yes\n");
		return;
	}
	else
	{
		next_a = now_a;
		next_b = now_b;
		next_c = now_c + 1;
		if(next_c > c || next_a * A + next_b * B + next_c * C > D)
		{
			next_c = 0;
			next_b++;
			if(next_b > b || next_a * A + next_b * B + next_c * C > D)
			{
				next_b = 0;
				next_a++;
				if(next_a > a || next_a * A + next_b * B + next_c * C > D)
				{
					printf("no\n");
					return;
				}
			}
		}
		make(next_a, next_b, next_c);
	}
}
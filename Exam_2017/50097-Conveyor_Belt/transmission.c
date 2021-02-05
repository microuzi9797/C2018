#include <math.h>

unsigned long long int take[64 * 1048576];

void transmission(long long int belt[], int N, int T)
{
	if(T == 0)
	{
		return;
	}
	else if(T % 64 == 0)
	{
		long long int move = T / 64;
		long long int temp[move];
		int i;
		for(i = 0;i < move;i++)
		{
			temp[i] = belt[i];
		}
		for(i = 0;i < N - move;i++)
		{
			belt[i] = belt[i + move];
		}
		for(i = N - move;i < N;i++)
		{
			belt[i] = temp[i - (N - move)];
		}
	}
	else if(T >= 1 && T <= 63)
	{
		long long int test = 0;
		int i;
		for(i = 63;i > 63 - T;i--)
		{
			test += pow(2, i);
		}
		for(i = 0;i < N;i++)
		{
			take[i] = (belt[i] & test);
			belt[i] <<= T;
		}
		belt[0] |= (take[1] >> 64 - T);
		for(i = 1;i < N - 1;i++)
		{
			belt[i] |= (take[i + 1] >> 64 - T);
		}
		belt[N-1] |= (take[0] >> 64 - T);
	}
	else
	{
		long long int move = T / 64;
		long long int temp[move];
		int i;
		for(i = 0;i < move;i++)
		{
			temp[i] = belt[i];
		}
		for(i = 0;i < N - move;i++)
		{
			belt[i] = belt[i + move];
		}
		for(i = N - move;i < N;i++)
		{
			belt[i] = temp[i - (N - move)];
		}
		T %= 64;
		long long int test = 0;
		for(i = 63;i > 63 - T;i--)
		{
			test += pow(2, i);
		}
		for(i = 0;i < N;i++)
		{
			take[i] = (belt[i] & test);
			belt[i] <<= T;
		}
		belt[0] |= (take[1] >> 64 - T);
		for(i = 1;i < N - 1;i++)
		{
			belt[i] |= (take[i + 1] >> 64 - T);
		}
		belt[N-1] |= (take[0] >> 64 - T);
	}
}
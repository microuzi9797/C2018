#include <stdio.h>

void balance(int l, int r);

int n;
int w[16384];

int main()
{
	scanf("%d", &n);
	int i;
	for(i = 0;i < n;i++)
	{
		scanf("%d", &w[i]);
	}
	balance(0, n - 1);
	return 0;
}

void balance(int l, int r)
{
	if(r - l + 1 < 3)
	{
		return;
	}
	else
	{
		int sum = 0;
		int balanceans = 0;
		int i, j;
		for(i = l;i <= r;i++)
		{
			int torque = 0;
			for(j = l;j <= r;j++)
			{
				torque += w[j] * (j - i);
			}
			if(torque == 0)
			{
				balanceans = 1;
				break;
			}
		}
		if(balanceans == 0)
		{
			return;
		}
		int b;
		b = i;
		balance(l, b - 1);
		printf("%d\n", b);
		balance(b + 1, r);
	}
}
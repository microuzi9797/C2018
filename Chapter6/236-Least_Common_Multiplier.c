#include <stdio.h>

int GCD(int a, int b);

int main()
{
	int n;
	int lcm = 1, gcd = 1;
	while(scanf("%d", &n) != EOF)
	{
		gcd = GCD(lcm, n);
		lcm = lcm * n / gcd;
	}
	printf("%d", lcm);
	return 0;
}

int GCD(int a, int b)
{
	int temp;
	if(a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	while((a % b) != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return b;
}
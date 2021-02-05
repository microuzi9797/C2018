#include <stdio.h>

main()
{
	int number1, number2;
	scanf("%d", &number1);
	scanf("%d", &number2);
	int a1, b1, c1, d1;
	int a2, b2, c2, d2;
	a1 = number1 / 1000;
	b1 = (number1 % 1000) / 100;
	c1 = (number1 % 100) / 10;
	d1 = number1 % 10;
	a2 = number2 / 1000;
	b2 = (number2 % 1000) / 100;
	c2 = (number2 % 100) / 10;
	d2 = number2 % 10;
	int A = 0,B = 0;
	if(a1 == a2)
	{
		A++;
	}
	if(b1 == b2)
	{
		A++;
	}
	if(c1 == c2)
	{
		A++;
	}
	if(d1 == d2)
	{
		A++;
	}
	if((a1 == b2) || (a1 == c2) || (a1 == d2))
	{
		B++;
	}
	if((b1 == a2) || (b1 == c2) || (b1 == d2))
	{
		B++;
	}
	if((c1 == a2) || (c1 == b2) || (c1 == d2))
	{
		B++;
	}
	if((d1 == a2) || (d1 == b2) || (d1 == c2))
	{
		B++;
	}
	printf("%dA%dB", A, B);
}
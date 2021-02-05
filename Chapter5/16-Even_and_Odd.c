#include <stdio.h>

main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	int i;
	int odd_counter = 0, even_counter = 0;
	int odd[1000], even[1000];
	for(i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0;i < n;i++)
	{
		if(a[i] % 2 == 1)
		{
			odd[odd_counter] = a[i];
			odd_counter++;
		}
		else
		{
			even[even_counter] = a[i];
			even_counter++;
		}
	}
	for(i = 0;i < odd_counter - 1;i++)
	{
		printf("%d ", odd[i]);
	}
	printf("%d\n", odd[odd_counter - 1]);
	for(i = 0;i < even_counter - 1;i++)
	{
		printf("%d ", even[i]);
	}
	printf("%d\n", even[even_counter - 1]);
}
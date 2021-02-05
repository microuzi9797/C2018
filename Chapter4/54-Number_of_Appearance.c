#include <stdio.h>

main()
{
	int N, M;
	scanf("%d", &N);
	scanf("%d", &M);
	int m1, m2, m3, m4, m5, m6;
	m1 = M / 100000;
	m2 = (M % 1000000) / 10000;
	m3 = (M % 100000) / 1000;
	m4 = (M % 10000) / 100;
	m5 = (M % 1000) / 10;
	m6 = M % 100;
	int ans = 0;
	if(N == m1)
	{
		ans++;
	}
	if(N == m2)
	{
		ans++;
	}
	if(N == m3)
	{
		ans++;
	}
	if(N == m4)
	{
		ans++;
	}
	if(N == m5)
	{
		ans++;
	}
	if(N == m6)
	{
		ans++;
	}
	printf("%d", ans);
}
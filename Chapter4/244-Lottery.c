#include <stdio.h>

main()
{
	int sp1, sp2, sp3;
	int fp1, fp2, fp3;
	scanf("%d", &sp1);
	scanf("%d", &sp2);
	scanf("%d", &sp3);
	scanf("%d", &fp1);
	scanf("%d", &fp2);
	scanf("%d", &fp3);
	int money = 0;
	int mynumber;
	while(scanf("%d", &mynumber) != EOF)
	{
		if(mynumber == sp1)
		{
			money += 2000000;
		}
		if(mynumber == sp2)
		{
			money += 2000000;
		}
		if(mynumber == sp3)
		{
			money += 2000000;
		}
		if(mynumber == fp1)
		{
			money += 200000;
		}
		else if((mynumber % 10000000) == (fp1 % 10000000))
		{
			money += 40000;
		}
		else if((mynumber % 1000000) == (fp1 % 1000000))
		{
			money += 10000;
		}
		else if((mynumber % 100000) == (fp1 % 100000))
		{
			money += 4000;
		}
		else if((mynumber % 10000) == (fp1 % 10000))
		{
			money += 1000;
		}
		else if((mynumber % 1000) == (fp1 % 1000))
		{
			money += 200;
		}
		if(mynumber == fp2)
		{
			money += 200000;
		}
		else if((mynumber % 10000000) == (fp2 % 10000000))
		{
			money += 40000;
		}
		else if((mynumber % 1000000) == (fp2 % 1000000))
		{
			money += 10000;
		}
		else if((mynumber % 100000) == (fp2 % 100000))
		{
			money += 4000;
		}
		else if((mynumber % 10000) == (fp2 % 10000))
		{
			money += 1000;
		}
		else if((mynumber % 1000) == (fp2 % 1000))
		{
			money += 200;
		}
		if(mynumber == fp3)
		{
			money += 200000;
		}
		else if((mynumber % 10000000) == (fp3 % 10000000))
		{
			money += 40000;
		}
		else if((mynumber % 1000000) == (fp3 % 1000000))
		{
			money += 10000;
		}
		else if((mynumber % 100000) == (fp3 % 100000))
		{
			money += 4000;
		}
		else if((mynumber % 10000) == (fp3 % 10000))
		{
			money += 1000;
		}
		else if((mynumber % 1000) == (fp3 % 1000))
		{
			money += 200;
		}
	}
	printf("%d\n",money);
}
#include <stdio.h>

void input(int n);
int useup(int a, int b, int c);

int DA, DB, DC, EA, EB, EC, FA, FB, FC;
int a, b, c;

int main()
{
	scanf("%d %d %d", &DA, &DB, &DC);
	scanf("%d %d %d", &EA, &EB, &EC);
	scanf("%d %d %d", &FA, &FB, &FC);
	int n;
	scanf("%d", &n);
	input(n);
	return 0;
}

void input(int n)
{
	if(n == 0)
	{
		return;
	}
	else
	{
		scanf("%d %d %d", &a, &b, &c);
		int ans = useup(a, b, c);
		if(ans)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
		input(n - 1);
	}
}

int useup(int a, int b,int c)
{
	if(a == 0 && b == 0 && c == 0)
	{
		return 1;
	}
	else if(a < 0 || b < 0 || c < 0)
	{
		return 0;
	}
	else
	{
		return (useup(a-DA, b-DB, c-DC) || useup(a-EA, b-EB, c-EC) || useup(a-FA, b-FB, c-FC));
	}
}
#include <stdio.h>
#include <limits.h>

int Area(int l[3], int b[3], int r[3], int t[3]);
int Overlap(int l[3], int b[3], int r[3], int t[3]);

int main()
{
	int l[3], b[3], r[3], t[3];
	int i;
	for(i = 0;i < 3;i++)
	{
		scanf("%d %d %d %d", &l[i], &b[i], &r[i], &t[i]);
	}
	int area;
	area = Area(l, b, r, t);
	printf("%d", area);
	return 0;
}

int Area(int l[3], int b[3], int r[3], int t[3])
{
	int area[3];
	int sum = 0;
	int i;
	for(i = 0;i < 3;i++)
	{
		area[i] = (r[i] - l[i]) * (t[i] - b[i]);
		sum += area[i];
	}
	sum -= Overlap(l, b, r, t);
	return sum;
}

int Overlap(int l[3], int b[3], int r[3], int t[3])
{
	int newl, newb, newr, newt;
	int i, j;
	int lap2 = 0;
	for(i = 0;i < 2;i++)
	{
		for(j = i + 1;j < 3;j++)
		{
			if(l[i] > l[j])
			{
				newl = l[i];
			}
			else
			{
				newl = l[j];
			}
			if(b[i] > b[j])
			{
				newb = b[i];
			}
			else
			{
				newb = b[j];
			}
			if(r[i] < r[j])
			{
				newr = r[i];
			}
			else
			{
				newr = r[j];
			}
			if(t[i] < t[j])
			{
				newt = t[i];
			}
			else
			{
				newt = t[j];
			}
			if(newl < newr && newb < newt)
			{
				lap2 += (newr - newl) * (newt - newb);
			}
		}
	}
	newl = INT_MIN;
	newb = INT_MIN;
	newr = INT_MAX;
	newt = INT_MAX;
	int lap3;
	for(i = 0;i < 3;i++)
	{
		if(l[i] > newl)
		{
			newl = l[i];
		}
		if(b[i] > newb)
		{
			newb = b[i];
		}
		if(r[i] < newr)
		{
			newr = r[i];
		}
		if(t[i] < newt)
		{
			newt = t[i];
		}
	}
	if(newl < newr && newb < newt)
	{
		lap3 = (newr - newl) * (newt - newb);
	}
	else
	{
		lap3 = 0;
	}
	return (lap2 - lap3);
}
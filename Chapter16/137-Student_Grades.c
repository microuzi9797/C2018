#include <stdio.h>

int main()
{
	int score[100];
	int count = 0;
	while(scanf("%d", &score[count]) != EOF)
	{
		count++;
	}
#ifdef HUNDRED
	int i;
	float sum = 0;
	for(i = 0;i < count;i++)
	{
		printf("%d ", score[i]);
		sum += score[i];
	}
	float avg;
	avg = sum / count;
	printf("%.1f", avg);
#endif
#ifdef APLUS
	int i;
	float rank[100];
	float ranksum = 0;
	int grade[100];
	float gradesum = 0;
	for(i = 0;i < count;i++)
	{
		if(score[i] >= 90 && score[i] <= 100)
		{
			printf("A+ ");
			rank[i] = 4.3;
			grade[i] = 95;
		}
		else if(score[i] >= 85 && score[i] <= 89)
		{
			printf("A ");
			rank[i] = 4.0;
			grade[i] = 87;
		}
		else if(score[i] >= 80 && score[i] <= 84)
		{
			printf("A- ");
			rank[i] = 3.7;
			grade[i] = 82;
		}
		else if(score[i] >= 77 && score[i] <= 79)
		{
			printf("B+ ");
			rank[i] = 3.3;
			grade[i] = 78;
		}
		else if(score[i] >= 73 && score[i] <= 76)
		{
			printf("B ");
			rank[i] = 3.0;
			grade[i] = 75;
		}
		else if(score[i] >= 70 && score[i] <= 72)
		{
			printf("B- ");
			rank[i] = 2.7;
			grade[i] = 70;
		}
		else if(score[i] >= 67 && score[i] <= 69)
		{
			printf("C+ ");
			rank[i] = 2.3;
			grade[i] = 68;
		}
		else if(score[i] >= 63 && score[i] <= 66)
		{
			printf("C ");
			rank[i] = 2.0;
			grade[i] = 65;
		}
		else if(score[i] >= 60 && score[i] <= 62)
		{
			printf("C- ");
			rank[i] = 1.7;
			grade[i] = 60;
		}
		else if(score[i] >= 0 && score[i] <= 59)
		{
			printf("F ");
			rank[i] = 0;
			grade[i] = 50;
		}
		ranksum += rank[i];
		gradesum += grade[i];
	}
	float rankavg;
	rankavg = ranksum / count;
	printf("%.1f ", rankavg);
	float gradeavg;
	gradeavg = gradesum / count;
	printf("%.1f", gradeavg);
#endif
	return 0;
}
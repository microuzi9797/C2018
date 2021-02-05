#include <stdio.h>
#include "computeGrade.h"

void computeGrade(Classes classes[2])
{
	int i, j;
	double rawsum[2];
	double rawavg[2];
	double r;
	for(i = 0;i < 18;i++)
	{
		rawsum[0] = 0;
		for(j = 0;j < classes[0].numStudent;j++)
		{
			rawsum[0] += classes[0].student[j].score[i].rawScore;
		}
		rawavg[0] = rawsum[0] / classes[0].numStudent;

		rawsum[1] = 0;
		for(j = 0;j < classes[1].numStudent;j++)
		{
			rawsum[1] += classes[1].student[j].score[i].rawScore;
		}
		rawavg[1] = rawsum[1] / classes[1].numStudent;

		r = 0;
		if(rawavg[0] > rawavg[1])
		{
			r = rawavg[0] / rawavg[1];
			for(j = 0;j < classes[0].numStudent;j++)
			{
				classes[0].student[j].score[i].scaledScore = classes[0].student[j].score[i].rawScore;
			}
			for(j = 0;j < classes[1].numStudent;j++)
			{
				classes[1].student[j].score[i].scaledScore = (classes[1].student[j].score[i].rawScore) * r;
				if(classes[1].student[j].score[i].scaledScore > 100)
				{
					classes[1].student[j].score[i].scaledScore = 100;
				}
			}
		}
		else if(rawavg[0] < rawavg[1])
		{
			r = rawavg[1] / rawavg[0];
			for(j = 0;j < classes[0].numStudent;j++)
			{
				classes[0].student[j].score[i].scaledScore = (classes[0].student[j].score[i].rawScore) * r;
				if(classes[0].student[j].score[i].scaledScore > 100)
				{
					classes[0].student[j].score[i].scaledScore = 100;
				}
			}
			for(j = 0;j < classes[1].numStudent;j++)
			{
				classes[1].student[j].score[i].scaledScore = classes[1].student[j].score[i].rawScore;
			}
		}
		else
		{
			for(j = 0;j < classes[0].numStudent;j++)
			{
				classes[0].student[j].score[i].scaledScore = classes[0].student[j].score[i].rawScore;
			}
			for(j = 0;j < classes[1].numStudent;j++)
			{
				classes[1].student[j].score[i].scaledScore = classes[1].student[j].score[i].rawScore;
			}
		}
	}

	double finalgradesum;
	for(i = 0;i < classes[0].numStudent;i++)
	{
		finalgradesum = 0;
		for(j = 0;j < 18;j++)
		{
			finalgradesum += classes[0].student[i].score[j].scaledScore;
		}
		classes[0].student[i].finalScore = finalgradesum * 0.06;
		if(classes[0].student[i].finalScore > 100)
		{
			classes[0].student[i].finalScore = 100;
		}
		printf("%s %f\n", classes[0].student[i].id, classes[0].student[i].finalScore);
	}

	for(i = 0;i < classes[1].numStudent;i++)
	{
		finalgradesum = 0;
		for(j = 0;j < 18;j++)
		{
			finalgradesum += classes[1].student[i].score[j].scaledScore;
		}
		classes[1].student[i].finalScore = finalgradesum * 0.06;
		if(classes[1].student[i].finalScore > 100)
		{
			classes[1].student[i].finalScore = 100;
		}
		printf("%s %f\n", classes[1].student[i].id, classes[1].student[i].finalScore);
	}
}
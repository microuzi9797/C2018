#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct student
{
	char name[65];
	float height;
	int weight;
	float BMI;
}Student;

int compare(const void *data1, const void *data2);

int main()
{
	int N;
	scanf("%d", &N);
	Student user[N];
	int i;
	for(i = 0;i < N;i++)
	{
		scanf("%s %f %d", user[i].name, &user[i].height, &user[i].weight);
		user[i].BMI = user[i].weight / pow((user[i].height / 100), 2);
	}
	qsort(user, N, sizeof(Student), compare);
	for(i = 0;i < N;i++)
	{
		printf("%s %d %d\n", user[i].name, (int)user[i].height, user[i].weight);
	}
	return 0;
}

int compare(const void *data1, const void *data2)
{
	Student *ptr1 = (Student *)data1;
	Student *ptr2 = (Student *)data2;
	if(ptr1->BMI < ptr2->BMI)
	{
		return -1;
	}
	else if(ptr1->BMI > ptr2->BMI)
	{
		return 1;
	}
	else if(ptr1->weight < ptr2->weight)
	{
		return -1;
	}
	else if(ptr1->weight > ptr2->weight)
	{
		return 1;
	}
	else if(ptr1->height < ptr2->height)
	{
		return -1;
	}
	else if(ptr1->height > ptr2->height)
	{
		return 1;
	}
	else
	{
		return (strcmp(ptr1->name, ptr2->name));
	}
}
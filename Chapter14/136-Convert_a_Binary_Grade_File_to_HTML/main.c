#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>

typedef struct
{
	char name[20];
	int id;
	char phone[10];
	float grade[4];
	int birth_year;
	int birth_month;
	int birth_day;
}Student;

int main()
{
	char filename1[81];
	char filename2[81];
	Student student[10000];
	scanf("%s", filename1);
	scanf("%s", filename2);

	FILE *fp1;
	FILE *fp2;
	fp1 = fopen(filename1, "rb");
	fp2 = fopen(filename2, "w");
	int n;
	n = fread(student, sizeof(Student), 10000, fp1);
	fclose(fp1);

	fprintf(fp2, "<table border=\"1\">\n");
	fprintf(fp2, "<tbody>\n");
	int i;
	for(i = 0;i < n;i++)
	{
		fprintf(fp2, "<tr>\n");
		fprintf(fp2, "<td>%s</td>\n", student[i].name);
		fprintf(fp2, "<td>%d</td>\n", student[i].id);
		fprintf(fp2, "<td>%s</td>\n", student[i].phone);
		fprintf(fp2, "<td>%f, %f, %f, %f</td>\n", student[i].grade[0], student[i].grade[1], student[i].grade[2], student[i].grade[3]);
		fprintf(fp2, "<td>%d, %d, %d</td>\n", student[i].birth_year, student[i].birth_month, student[i].birth_day);
		fprintf(fp2, "</tr>\n");
	}
	fprintf(fp2, "</tbody>\n");
	fprintf(fp2, "</table>\n");
	fclose(fp2);
}
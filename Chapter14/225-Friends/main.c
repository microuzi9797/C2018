#include <stdio.h>
#include <string.h>

struct person
{
	unsigned int id;
	char name[32];
};

struct friends
{
	unsigned id1;
	unsigned id2;
};

int main()
{
	FILE *fp;
	struct person a[10000];
	struct friends b[10000];
	int P, F;
	fp = fopen("friends", "rb");
	fread(&P, 4, 1, fp);
	fread(a, sizeof(struct person), P, fp);
	fread(&F, 4, 1, fp);
	fread(b, sizeof(struct friends), F, fp);
	fclose(fp);

	char test_name1[32], test_name2[32];
	unsigned int test_id1, test_id2;
	int check_id1 = 0, check_id2 = 0;
	int i, j;
	for(i = 0;i < 10000;i++)
	{
		scanf("%s", test_name1);
		if(strcmp(test_name1, "end") == 0)
		{
			break;
		}
		scanf("%s", test_name2);
		check_id1 = 0;
		check_id2 = 0;
		for(j = 0;j < P;j++)
		{
			if(check_id1 == 1 && check_id2 == 1)
			{
				break;
			}
			else
			{
				if(check_id1 == 0 && strcmp(test_name1, a[j].name) == 0)
				{
					test_id1 = a[j].id;
					check_id1 = 1;
				}
				else if(check_id2 == 0 && strcmp(test_name2, a[j].name) == 0)
				{
					test_id2 = a[j].id;
					check_id2 = 1;
				}
			}
		}
		for(j = 0;j < F;j++)
		{
			if((b[j].id1 == test_id1 && b[j].id2 == test_id2) || (b[j].id1 == test_id2 && b[j].id2 == test_id1))
			{
				printf("yes\n");
				break;
			}
		}
		if(j == F)
		{
			printf("no\n");
		}
	}
	return 0;
}
#include <stdio.h>
#include <limits.h>

int main()
{
	char filename[201];
	scanf("%s", filename);

	FILE *fp;
	fp = fopen(filename, "rb");
	int n;
	short int num[100000] = {0};
	fread(&n, 4, 1, fp);
	fread(num, 2, n, fp);
	fclose(fp);

	int counter[100000] = {0};
	int i;
	for(i = 0;i < n;i++)
	{
		counter[(int)num[i] + 32768]++;
	}
	int max = INT_MIN;
	int maxcounter = 0;
	for(i = 0;i < 32767 - (-32768);i++)
	{
		if(counter[i] >= maxcounter)
		{
			max = i - 32768;
			maxcounter = counter[i];
		}
	}
	printf("%d\n%d", max, maxcounter);
	return 0;
}
#include <stdio.h>

int **first[100];
int *second[5000];

int ***constructTable(int A[], int B[])
{
	int ***firstptr = first;
	int **secondptr = second;
	int *Bptr = B;
	int i;
	int counter = 0;
	while(A[counter] != 0)
	{
		*firstptr = secondptr;
		*firstptr++;
		for(i = 0;i < A[counter];i++)
		{
			*secondptr = Bptr;
			*secondptr++;
			while(*Bptr != 0)
			{
				Bptr++;
			}
			Bptr++;
		}
		*secondptr = NULL;
		*secondptr++;
		counter++;
	}
	*firstptr = NULL;
	return first;
}
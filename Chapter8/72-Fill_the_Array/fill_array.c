#include <stdio.h>
 
void fill_array(int *ptr[], int n)
{
	int i;
	for(i = 0;i < n;i++)
	{
		*ptr[i] = i;
	}
	int *lptr, *rptr;
	lptr = &(*ptr[0]);
	rptr = lptr + 1;
	while(lptr != &(*ptr[n - 1]))
	{
		while(*rptr == 0)
		{
			rptr++;
		}
		int *aptr;
		for(aptr = lptr + 1;aptr < rptr;aptr++)
		{
			*aptr = *lptr + *rptr;
		}
		lptr = rptr;
		rptr = lptr + 1;
		if(rptr == NULL)
		{
			break;
		}
	}
}
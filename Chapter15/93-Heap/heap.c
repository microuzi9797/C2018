#include <stdio.h>
#include <limits.h>
#include "heap.h"

void initialize(struct Heap *heap)
{
	int i;
	for(i = 0;i < MAXHEAP;i++)
	{
		heap->ary[i] = 0;
	}
	heap->num = 0;
}

int removeMin(struct Heap *heap)
{
	if(isEmpty(heap))
	{
		//printf("heap is empty\n");
		return -1;
	}
	else
	{
		int min = INT_MAX;
		int min_i;
		int i;
		for(i = 0;i < heap->num;i++)
		{
			if(heap->ary[i] < min)
			{
				min = heap->ary[i];
				min_i = i;
			}
		}
		if(min_i != heap->num - 1)
		{
			heap->ary[min_i] = heap->ary[heap->num - 1];
		}
		(heap->num)--;
		return min;
	}
}

void add(struct Heap *heap, int i)
{
	if(isFull(heap))
	{
		//printf("heap is full\n");
		return;
	}
	else
	{
		heap->ary[heap->num] = i;
		(heap->num)++;
	}
}

int isFull(struct Heap *heap)
{
	if(heap->num >= MAXHEAP)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isEmpty(struct Heap *heap)
{
	if(heap->num <= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
#include <stdio.h>
#include "set.h"

void init(Set *set)
{
	*set = 0;
}

void add(Set *set, int i)
{
	unsigned long long test = 1;
	test <<= i;
	*set |= test;
}

void has(Set set, int i)
{
	unsigned long long test = 1;
	test <<= i;
	if((set & test) != 0)
	{
		printf("set has %d\n", i);
	}
	else
	{
		printf("set does not have %d\n", i);
	}
}

Set setUnion(Set a, Set b)
{
	Set c;
	c = a | b;
	return c;
}

Set setIntersect(Set a, Set b)
{
	Set c;
	c = a & b;
	return c;
}

Set setDifference(Set a, Set b)
{
	Set c;
	c = a ^ b;
	return c;
}
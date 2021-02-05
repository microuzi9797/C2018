#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

void init_storage(Employee **storage, int n)
{
	// allocate memory space to store employee data
	// no need to understand this function now.

	(*storage) = (Employee *)malloc(sizeof(Employee) * n);
}

void free_storage(Employee **storage)
{
	free(*storage);
	*storage = 0;
}

Employee* find_employee_by_id( Employee *set, int n, int id )
{
	int i;
	for(i = 0;i < n;i++)
	{
		if(set[i].id == id)
		{
			return &set[i];
		}
	}
}

Employee* find_employee_by_name( Employee *set, int n, const char *first_name, const char *last_name )
{
	int i;
	for(i = 0;i < n;i++)
	{
		if(strcmp(set[i].first_name, first_name) == 0 && strcmp(set[i].last_name, last_name) == 0)
		{
			return &set[i];
		}
	}
}

Employee* find_root_boss( Employee *set, int n, Employee *employee )
{
	int i;
	for(i = 0;i < n;i++)
	{
		if(set[i].id == employee->boss_id)
		{
			return &set[i];
		}
	}
}

int check_relationship(Employee *set, int n, Employee *A, Employee *B)
{
	Employee *tempA = A;
	Employee *tempB = B;
	while(tempA->id != tempA->boss_id)
	{
		tempA = find_root_boss(set, n, tempA);
		if(tempA == B)
		{
			return 1;
		}
	}
	while(tempB->id != tempB->boss_id)
	{
		tempB = find_root_boss(set, n, tempB);
		if(tempB == A)
		{
			return 2;
		}
	}
	if(tempA == tempB)
	{
		return 3;
	}
	else
	{
		return 4;
	}
}
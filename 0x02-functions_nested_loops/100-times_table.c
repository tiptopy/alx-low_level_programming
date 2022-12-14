#include "main.h"

#include <string.h>

#include <stdio.h>

/**
  *print_times_table -Multiplication table
  *@n: This function takes n as table limit
  *Return: This function returns nothing
*/

void print_times_table(int n)
{
	int i, j, prd;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (n > 15 || n < 0)
				break;

			prd = i * j;

			if (j != 0 && prd < 10)
				printf("  ");
			else if (j != 0 && prd > 10 && prd < 100)
				printf(" ");
			if (j == n)
				printf("%d\n", i * j);
			else
				printf("%d, ", i * j);
		}
	}
}

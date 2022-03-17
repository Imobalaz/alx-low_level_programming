#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - main function
 *
 * @n : function variable
 *
 * Return: 0
 */

void print_to_98(int n)
{
	int i;

	i = n;
	if (i <= 98)
	{
		for (; i <= 98; i++)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (; i >= 98; i--)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}

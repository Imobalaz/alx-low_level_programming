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
			int m;

			if (i < 0)
			{
				m = i * -1;
				_putchar('-');
			}
			else
				m = i;
			printf("%i", m);
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
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

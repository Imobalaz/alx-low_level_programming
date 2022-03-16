#include "main.h"

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
	
	for (i = n; i <= 98; i++)
	{
		if (i % 2 == 0)
		{
			int m;

			if (i < 0)
			{
				m = i * -1;
				_putchar('-');
			}
			else
				m = i;
			if (m > 9)
				_putchar('0'+ m / 10);
			_putchar('0' + m % 10);

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}

#include "main.h"

/**
 * print_times_table - main function
 *
 * @n : function variable
 *
 * Return: 0
 *
 */

void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			k = i * j;

			if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + k);
			}
			else if (k > 9 && k < 100)
			{
				_putchar(' ');
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			else
			{
				_putchar('0' + k / 100);
				_putchar('0' + (k / 10) % 10);
				_putchar('0' + k % 10);
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}

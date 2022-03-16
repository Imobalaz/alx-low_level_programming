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
			if (m > 99)
				{
					_putchar('0' + m / 100);
					m = m % 100;
				}
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
	else
	{
		for (; i >= 98; i--)
		{
			int m;
			
			m = i;
			if (m > 99)
				{
					_putchar('0' + m / 100);
					m = m % 100;
				}
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
	
	_putchar('\n');
}

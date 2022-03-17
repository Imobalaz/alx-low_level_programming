#include "main.h"

/**
 * times_table - main function
 *
 * Return: 0
 */

void times_table(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		int b;

		b = 0;
		while (b < 10)
		{
			int c;

			c = a * b;
			if (c > 9)
				_putchar('0' + c / 10);
			else if (c < 10 && b != 0)
				_putchar(' ');
			_putchar('0' + c % 10);

			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}

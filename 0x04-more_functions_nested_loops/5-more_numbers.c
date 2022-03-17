#include "main.h"

/**
 * more_numbers - print more
 *
 * Return: 0
 */

void more_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int i;

		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				putchar('1');
			putchar('0' + i % 10);
		}

		putchar('\n');
	}
}

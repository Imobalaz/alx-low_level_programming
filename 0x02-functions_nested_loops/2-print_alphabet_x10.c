#include "main.h"

/**
 * function - main block
 *
 * Return: 0
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;
	
	while (i < 10)
	{
		char n = 'a';

		while (n <= 'z')
		{
			_putchar(n);
		}

		_putchar('\n');
	}
}

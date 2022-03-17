#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c : function variable
 * Return: 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
        {
			_putchar('C');
			return (1);
		}
	return (0);
}

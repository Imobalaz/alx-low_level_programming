#include "main.h"

/**
 * puts_half - function that prints second half of a string
 *
 * @str : The string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int n;
	int i;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}

	n = (len - 1) / 2;
	for (i = len - n; i < len; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}

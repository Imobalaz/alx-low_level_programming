#include "main.h"

/**
 * _puts_recursion - function that prints a string
 *
 * @s : the string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int len;

	len = 0;
	while (s[len])
	{
		_putchar(s[len]);
		len++;
	}

	_putchar('\n');
}

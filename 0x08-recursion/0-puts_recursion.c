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

	if (s[len] == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[len]);
	_puts_recursion(s + 1);
}

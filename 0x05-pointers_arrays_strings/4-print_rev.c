#include "main.h"

/**
 * print_rev - function to print a string in reverse
 *
 * @s : position of the first character in the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	{

	i = len - 1;
	for (i; i >= 0; i--)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}

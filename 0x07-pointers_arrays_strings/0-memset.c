#include "main.h"

/**
 * _memset - function to fill memory with a constant byte
 *
 * @s : start of memory area
 *
 * @b : The character it would be filled with
 *
 * @n : The lenght of memory area to be filled
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

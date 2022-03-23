#include "main.h"

/**
 * string_toupper - function that changes all lowercase to uppercase
 *
 * @s : the string
 *
 * Return: pointer to the string
 */

char *string_toupper(char *s)
{
	int len;

	len = 0;

	while (s[len])
	{
		if (s[len] <= 'z' && s[len] >= 'a')
			s[len] -= 32;
		len++;
	}

	return (s);
}

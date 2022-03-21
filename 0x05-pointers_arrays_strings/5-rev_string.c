#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s : string to be reversed
 *
 * REturn: null
 */

void rev_string(char *s)
{
	char *tmp;
	int len;
	int i;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	
	tmp = s;

	for (i = 0; i < len; i++)
	{
		s[i] = tmp[len - i - 1];
	}
}

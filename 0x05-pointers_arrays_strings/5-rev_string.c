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
	char tmp;
	int len;
	int i;
	int middle;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	middle = len / 2;

	while (middle--)
	{
		tmp = s[len - 1 - i];
		s[len - i - 1] = s[i];
		s[i] = tmp;
	}
	
}

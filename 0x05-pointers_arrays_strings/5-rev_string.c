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
	char a;
	
	a = 'a';
	tmp = &a;

	len = 0;
	while (*(s + len) != '\0')
		len++;

	for (i = 0; i < len; i++)
		*(tmp + i) = *(s + i);
	for (i = 0; i < len; i++)
		*(s + i) = *(tmp + len - 1);
}

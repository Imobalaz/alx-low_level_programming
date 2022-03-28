#include "main.h"

/**
 * _strpbrk - Dont ask me what this function does
 *
 * @s : one string
 *
 * @accept : accept what exactly?
 *
 * Return: pointer to the first match from accept
 */

char *_strpbrk(char *s, char *accept)
{
	int len_s;
	int i, j;

	len_s = 0;
	while (s[len_s])
		len_s++;

	for (i = 0; i < len_s; i++)
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;

	}
	return (0);
}

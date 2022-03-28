#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack : just like the name
 *
 * @needle : I need better luck
 *
 * Return: the pointer to the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int tester;

	i = 0;
	tester = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			tester = 1;
			j = 0;
			while (needle[j])
			{
				if (haystack[i + j] == needle[j])
					tester *= 1;
				else
					tester *= 0;
				j++;
			}

		}
		if (tester)
			return (haystack + i);
		i++;
	}

	return (0);
}

#include "main.h"

/**
 * cap_string - funciton that capitalizes all words in a string
 *
 * @s : the string
 *
 * Return: pointer to the string s
 */

char *cap_string(char *s)
{
	int signs[] = {32, 9, 10, 44, 46, 59, 33, 63, 34, 123, 125, 40, 41};
	int len;
	int i;

	len = 0;
	while (s[len])
	{
		for (i = 0; i < 13; i++)
		{
			if (s[len] == signs[i] && s[len + 1] <= 'z' && s[len + 1] >= 'a')
				s[len + 1] -= 32;
		}

		len++;
	}

	return (s);

}

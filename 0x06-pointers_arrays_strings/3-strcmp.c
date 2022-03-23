#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1 : first string
 *
 * @s2 : second string
 *
 * Return: difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int len1;
	int len2;
	int len;
	int i;
	int diff;

	len1 = 0;
	while (s1[len1])
		len1++;
	len2 = 0;
	while (s2[len2])
		len2++;
	if (len1 <= len2)
		len = len2;
	else
		len = len1;

	for (i = 0; i < len; i++)
	{
		diff = s1[i] - s2[i];

		if (diff != 0 || s1[i] == 0 || s2[i] == 0)
			break;
	}

	return (diff);


}

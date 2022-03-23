#include "main.h"

/**
 * _strncat - function to concatenate a string and another
 *
 * @dest : main string
 *
 * @src : second string
 *
 * @n : number of bytes to be contatenated
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest;

	len_dest = 0;
	while (dest[len_dest] != 0)
		len_dest++;

	for (i = 0; i < n; i++)
	{
		if (src[i] != 0)
		{
			dest[len_dest + i] = src[i];
		}
		else
			break;
	}

	if (i == n - 1)
		dest[len_dest + n] = 0;
	else
		dest[len_dest + i] = 0;
	return (dest);
}

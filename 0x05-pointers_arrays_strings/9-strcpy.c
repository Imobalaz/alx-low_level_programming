#include "main.h"

/**
 * _strcpy - function to copy string
 *
 * @dest : destination
 *
 * @src : source
 *
 * Return: pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = 0;
	while (*(src + len) != '\0')
		len++;
	for (i = 0; i < len + 1; i++)
		*(dest + i) = *(src + i);
	return (dest);

}


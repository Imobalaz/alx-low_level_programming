#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb : number of bytes to be allocated
 *
 * @size : size of portions
 *
 * Return: pointer to the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	s = malloc(size * nmemb);

	i = 0;
	if (s == NULL)
		return (0);
	while (i < size * nmemb)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}

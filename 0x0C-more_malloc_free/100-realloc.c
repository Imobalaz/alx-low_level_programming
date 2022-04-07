#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 *
 * @ptr : previously allocated memory
 *
 * @old_size : size of previously allocated memory
 *
 * @new_size : size of new memory
 *
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i;
	char *p;

	p = ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	s = malloc(new_size);

	if (s == NULL)
	{
		free(ptr);
		return (0);
	}

	if (ptr != NULL)
	{
		if (new_size > old_size)
		{
			for (i = 0; i < old_size; i++)
				s[i] = p[i];
		}
		else if (old_size > new_size)
		{
			for (i = 0; i < new_size; i++)
				s[i] = p[i];
		}
		else
		{
			free(s);
			return (ptr);
		}
	}
	free(ptr);
	return (s);
}

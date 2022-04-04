#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 *
 * @size : the size of the array
 *
 * @c : the initialization character
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	A = (char *) malloc(size * sizeof(char));

	if (A == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		A[i] = c;
	return (A);
}

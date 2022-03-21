#include <stdio.h>
#include "main.h"

/**
 * print_array - function that print elements in an array
 *
 * @a : The pointer to the first element in the array
 *
 * @n : The number of elements in the array
 *
 * Return: null
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", *(a + i));
		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}

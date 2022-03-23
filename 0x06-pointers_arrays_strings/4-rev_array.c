#include "main.h"

/**
 * reverse_array - function that reverses an array
 *
 * @a : the array
 *
 * @n : the length of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;

	}
}

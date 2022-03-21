#include "main.h"

/**
 * swap_int - Function to swap two ints
 *
 * @a : the first int
 *
 * @b : the second int
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

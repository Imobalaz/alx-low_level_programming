#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of intergers
 *
 * @min : minimum value
 *
 * @max : maximum value
 *
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *array;
	int len;
	int i;

	if (min > max)
		return (0);
	len = max - min + 1;
	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (0);
	i = 0;
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}

	return (array);

}

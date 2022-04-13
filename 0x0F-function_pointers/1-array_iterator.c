#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that does something
 *
 * @array : the array
 *
 * @size : the size of the array
 *
 * @action : the pointer to the function to be used
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != 0 && size > 0 && action != 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

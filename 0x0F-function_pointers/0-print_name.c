#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints name
 *
 * @name : name to be printed
 *
 * @f : callback function that prints
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}

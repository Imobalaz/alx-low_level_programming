#include "main.h"

/**
 * print_triangle - prints triangle of a certain height
 * @size : height of the triangle to be printed.
 * Return: 0
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int j;

			for (j = 0; j < size; j++)
			{
				if (j < size - i - 1)
					_putchar(' ');
				else
					_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

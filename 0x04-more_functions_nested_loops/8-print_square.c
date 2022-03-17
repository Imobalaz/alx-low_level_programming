#include "main.h"

/**
 * print_square - prints square of a certain height
 * @size : height of the square to be printed.
 * Return: 0
 */

void print_square(int size)
{
    if (size > 0)
    {
         int i;

        for (i = 0; i < n; i++)
        {
            int j;

            for (j = 0; j < n; j++)
                _putchar('#');

            _putchar('\n');
        }
    }
    else
        _putchar('\n');
}
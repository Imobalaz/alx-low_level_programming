#include "main.h"

/**
 * print_diagonal - prints diagonal of a certain height
 * @n : height of the diagonal to be printed.
 * Return: 0
 */

void print_diagonal(int n)
{
    if (n > 0)
    {
        int i;

        for (i = 0; i < n; i++)
        {
            int j;

            for (j = 0; j < i + 1; j++)
            {
                if (j == i)
                    _putchar(92);
                else
                    _putchar(' ');
            }

            _putchar('\n');
        }
    }
    else
        _putchar('\n');
}
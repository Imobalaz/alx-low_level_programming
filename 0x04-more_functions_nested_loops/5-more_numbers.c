#include "main.h"

/**
 * more_numbers - main function
 * Return: 0 
 */

void more_numbers(void)
{
    int j;
    
    for (j = 0; j < 10; j++)
    {
        int i = 0;

        for (; i < 15; i++)
        {
            if (i > 9)
                _putchar('1');
            _putchar('0' + i % 10);
        }

        _putchar('\n');
    }
}
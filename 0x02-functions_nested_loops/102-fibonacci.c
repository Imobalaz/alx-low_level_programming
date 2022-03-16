#include <stdio.h>

/**
 * main - main block
 * 
 * Return: 0
 * 
 */

int main(void)
{
    long long fibonacci[50];

    fibonacci[0] = 1;
    fibonacci[1] = 2;

    int i;

    for (i = 2; i < 50; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

     int j;

    for (j = 0; j < 50; j++)
    {
        printf("%lli", fibonacci[j]);

        if (j != 49)
        {
            printf(", ");
        }
    }
    
    printf("\n");

    
}
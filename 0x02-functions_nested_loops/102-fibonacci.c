#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * 
 * Return: 0
 * 
 */

int main(void)
{
    int i;
    long j;
    long k;

    i = 0; 
    j = 1;
    k = 2;

    while (i < 50)
    {
        if (i == 0)
            printf("%li", j);
        else if (i == 1)
            printf("%li", k);
        else 
        {
            k += j;
            j = k - j;
            printf("%li", k);
        }

        if (i != 49)
            printf(", ");
        i++;
    }
    printf("\n");
    return (0);
}
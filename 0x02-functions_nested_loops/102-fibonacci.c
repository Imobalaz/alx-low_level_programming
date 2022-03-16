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
    long long j;
    long long k;

    i = 0; 
    j = 1;
    k = 2;

    while (i < 50)
    {
        if (i == 0)
            printf("%lli", j);
        else if (i == 1)
            printf("%lli", k);
        else 
        {
            k += j;
            j = k - j;
            printf("%lli", k);
        }

        if (i != 49)
            printf(", ");
        i++;
    }

    printf("\n");
    
}
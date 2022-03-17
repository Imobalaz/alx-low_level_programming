#include <stdio.h>
#include <stdbool.h>

long long largest_prime_factor(long long n);
bool is_prime(long long i);
/**
 * main - main block
 * Return: 0
 */

int main(void)
{
    largest_prime_factor(612852475143);
}

long long largest_prime_factor(long long n)
{
    long long largest;
    for (long long i = 2; i < n; i++)
    {
        if (n % i == 0 && is_prime(i))
        {
            largest = i;
        }
    }

    if (largest == 0)
        largest = n;

    printf("%lli", largest);
    return (largest);
}

bool is_prime(long long i)
{
    for(long long j = 2; j < i; j++)
    {
        if (i % j == 0)
            return (false);
    }

    return (true);
}


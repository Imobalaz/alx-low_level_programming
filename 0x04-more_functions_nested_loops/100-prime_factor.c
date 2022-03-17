#include <stdio.h>
#include <stdbool.h>

long largest_prime_factor(long n);
bool is_prime(long i);
/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}

long largest_prime_factor(long n)
{
	long largest;
	long i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0 && is_prime(i))
		{
			largest = i;
		}
	}
	
	if (largest == 0)
		largest = n;
	printf("%li", largest);
	return (largest);
}

bool is_prime(long i)
{
	long j;

	for(j = 2; j < i; j++)
	{
		if (i % j == 0)
			return (false);
	}
	
	return (true);
}


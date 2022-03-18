#include <stdio.h>

long largest_prime_factor(long n);

/**
 * main - main block
 * Return: 0
 */

/**
 * largest_prime_factor - function to return the largest prime factor
 * of a number
 *
 * @n : the number whose largest prime factor we want
 *
 * Return: the largest prime factor
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
		if (n % i == 0)
		{
			largest = n / i;
			break;
		}
		largest = n;
	}

	if (largest < n)
		largest_prime_factor(largest);
	else
		printf("%li\n", largest);
	return (0);
}

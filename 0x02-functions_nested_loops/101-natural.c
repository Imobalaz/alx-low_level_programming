#include <stdio.h>

/**
 * main - main block
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int sum;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%i\n", sum);
	return (0);
}

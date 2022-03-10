#include <stdio.h>
/**
 * main - main block
 * Return: 0
 *
 */
int main(void)
{
	int m = sizeof(char);
	int n = sizeof(int);
	int o = sizeof(long);
	int p = sizeof(long long);
	int q = sizeof(float);

	printf("Size of a char: %i byte(s)\n", m);
	printf("Size of an int: %i byte(s)\n", n);
	printf("Size of a long int: %i byte(s)\n", o);
	printf("Size of a long long int: %i byte(s)\n", p);
	printf("Size of a float: %i byte(s)\n", q);

	return (0);
}

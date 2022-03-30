#include "main.h"

/**
 * _sqrt_recursion - function to find the square root of a number
 *
 * @n : the number
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	int result;

	result = get_sqrt(n, 1);
	return (result);
}

/**
 * get_sqrt - helper function to get square root
 *
 * @n : the number
 *
 * @m : the square root
 *
 * Return: the square root
 */

int get_sqrt(int n, int m)
{
	if (n == 0)
		return (0);
	else if (m * m > n)
		return (-1);
	else if (m * m == n)
		return (m);
	return (get_sqrt(n, m + 1));
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * digit_checker - function to check if all inputs are digits
 *
 * @num : the value pass into the function
 *
 * Return: 1 if it passes or 0 if it fails
 */

int digit_checker(char *num)
{
	int i;

	i = 0;
	while (num[i])
	{
		if (num[i] < 48 || num[i] > 57)
		{
			return (0);
		}
		i++;
	}

	return(1);

}
/**
 * main - function that multiplies two values
 *
 * @argc : number of args
 *
 * @argv : array of args
 *
 * Return: null
 */

int main(int argc, char *argv[])
{
	long num1;
	long num2;
	long prod;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (digit_checker(argv[1]) && digit_checker(argv[2]))
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	prod = num1 * num2;

	printf("%ld\n", prod);
	return (0);



}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name
 *
 * @argc : number of arguments passed
 *
 * @argv : array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum;
	int i;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) && argv[i][0] != '0')
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%i\n", sum);
	return (0);
}

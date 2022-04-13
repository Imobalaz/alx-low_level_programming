#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - a calc program
 *
 * @argc : the number of args
 *
 * @argv : array of args
 *
 * Return: value
 */

int main(int argc, char *argv[])
{
	char *signs[] = {"+", "-", "*", "/", "%"};
	int i;
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < 5; i++)
	{
		if (!strcmp(argv[2], signs[i]))
			break;
		if (i == 4)
		{
			printf("Error\n");
			exit(99);
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = get_op_func(argv[2])(num1, num2);
	printf("%i\n", result);
	return (0);
}

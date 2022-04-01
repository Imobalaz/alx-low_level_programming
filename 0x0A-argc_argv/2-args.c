#include "main.h"

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
	int i;
	int j;
	char *arg;

	for (i = 0; i < argc; i++)
	{
		arg = argv[i];
		j = 0;
		while (arg[j])
		{
			_putchar(arg[j]);
			j++;
		}
		_putchar('\n');
	}
	return (0);
}

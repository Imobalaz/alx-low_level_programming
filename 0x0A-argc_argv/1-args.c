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
	(void) argv;
	_putchar('0' + argc - 1);
	_putchar('\n');
	return (0);
}

#include "main.h"
/**
 * main - main
 *
 * Return: 0
 *
 */

int main(void)
{
	char text[8] = "_putchar";

	int i = 0;

	while (i < 8)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

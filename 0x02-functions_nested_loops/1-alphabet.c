#include "main.h"

/**
 * main - main block
 *
 * Return: 0
 *
 */

int main(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter ++;
	}

	_putchar('\n');
	return (0);
}


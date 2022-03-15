#include "main.h"

/**
 * _isalpha - main block
 *
 * @c : character to check the case
 *
 * Return: 0
 *
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}

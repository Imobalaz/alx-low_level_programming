#include "main.h"

/**
 * _isdigit - checks for characters between 0 and 9
 * @c : function variable
 * Return: 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

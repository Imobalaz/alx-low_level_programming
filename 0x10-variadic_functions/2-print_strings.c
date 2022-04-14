#include "variadic_functions.h"
#include <string.h>

/**
 * print_strings - function that prints strings
 *
 * @separator : the separator
 *
 * @n : number of strings to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *word;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(list, char *);

		if (strcmp(word, "") == 0)
			word = "(nil)";

		if (separator == 0 || i == 0)
			printf("%s", word);
		else
			printf("%s%s", separator, word);
	}
	va_end(list);

	printf("\n");
}

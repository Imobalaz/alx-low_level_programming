#include "lists.h"

/**
 * print_list - function that prints all the elements in a list
 *
 * @h : pointer to the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	return (recursion_for_print_list(h, &i));
}

/**
 * recursion_for_print_list - prints content of lists recursively
 *
 * @h : the head of the list
 *
 * @i : for counting
 *
 * Return: number of nodes
 */

size_t recursion_for_print_list(const list_t *h, size_t *i)
{
	char *string;
	unsigned int length;

	if (h == NULL)
		return (*i);

	string = h->str;
	length = h->len;

	if (!string)
	{
		string = "(nil)";
		length = 0;
	}

	printf("[%i] %s\n", length, string);
	*i += 1;
	recursion_for_print_list(h->next, i);

	return (*i);
}

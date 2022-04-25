#include "lists.h"

/**
 * print_listint - function that prints all the elements in a list
 *
 * @h : the list
 *
 * Return: the number of elements printed
 */

size_t print_listint(const listint_t *h)
{
	size_t counter;

	if (h == NULL)
		return (0);

	counter = 0;
	while (h)
	{
		printf("%i\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}

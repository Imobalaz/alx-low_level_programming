#include "lists.h"

/**
 * sum_listint - functions that returns the sm of all the data in a list
 *
 * @head : pointer to the list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	if (!head)
		return (0);

	sum = 0;
	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);

}

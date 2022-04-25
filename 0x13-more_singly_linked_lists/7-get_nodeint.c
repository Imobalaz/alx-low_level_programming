#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 *
 * @head : pointer to the list
 *
 * @index : index
 *
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (!head)
		return (0);

	i = 0;
	temp = head;
	while (i < index)
	{
		if (!temp)
			return (0);
		temp = temp->next;
		i++;
	}

	return (temp);
}

#include "lists.h"

/**
 * free_listint - a function that frees a list
 *
 * @head : pointer to the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}

	free(head);
}

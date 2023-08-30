#include "lists.h"

/**
 * free_listint - frees everything
 * @head: node in your lists
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

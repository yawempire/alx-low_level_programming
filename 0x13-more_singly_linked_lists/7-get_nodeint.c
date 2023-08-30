#include "lists.h"

/**
 * get_nodeint_at_index - returns the node
 * @head: arguments
 * @index: index of the node to return
 *
 * Return: (0) Success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

#include "lists.h"

/**
  * listint_len - Returning number of the elements in the lists
  * @h: The node in the list
  *
  * Return: Number of nodes
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *curr;

	curr = h;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}

	return (count);
}

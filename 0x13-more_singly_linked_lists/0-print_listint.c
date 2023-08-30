#include "lists.h"

/**
  * print_listint - Function to print all elements of linked list
  * @h: Linked list of listint_t
  *
  * Return: Count of the nodes
  */

size_t print_listint(const listint_t *h)
{
	const listint_t *curr;
	size_t count = 0;

	curr = h;


	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		count++;
	}

	return (count);
}

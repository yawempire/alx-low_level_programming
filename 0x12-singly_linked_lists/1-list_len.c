#include <stdlib.h>
#include "lists.h"

/**
  * list_len - number of elements in the list
  * @h: ptr to the list_t list
  *
  * Return: Number of elements in list
  */
size_t list_len(const list_t *h)
{
	const list_t *curr;
	size_t count = 0;

	curr = h;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}

	return (count);
}

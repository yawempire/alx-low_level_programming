#include "lists.h"

/**
  * sum_listint - sum of all the  data
  * @head: node
  *
  * Return: sum of data or (0) if empty
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;

		head = head->next;
	}

	return (sum);
}

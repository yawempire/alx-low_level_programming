#include "lists.h"

/**
  * pop_listint - Deletes the head node
  * @head: ptr to the first element
  *
  * Return: (0) if empty, data in the elements
  *
  */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *curr;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	curr = *head;
	*head = (*head)->next;
	free(curr);

	return (data);
}

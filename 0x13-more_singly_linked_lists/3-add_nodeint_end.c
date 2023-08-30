#include "lists.h"

/**
  * add_nodeint_end - add a new node at the end
  * @head: ptr to the first element
  * @n: data in the the new element
  *
  * Return: address of the new element
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr;
	listint_t *new_node = malloc(sizeof(listint_t));

	curr = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (curr->next != NULL)
		{
			curr = curr->next;
		}

		curr->next = new_node;
	}

	return (new_node);
}

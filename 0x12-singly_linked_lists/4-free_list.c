#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Free a linked list
  * @head: Linked list
  */
void free_list(list_t *head)
{
	list_t *curr;
	list_t *aux_node;

	curr = head;

	while (curr != NULL)
	{
		aux_node = curr;
		curr = curr->next;
		free(aux_node);
	}

	head = NULL;
}

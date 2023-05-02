#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: head of node
 */

void free_listint(listint_t *head)
{
	listint_t *current_node = head;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}

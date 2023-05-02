#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list and sets HEAD to NULL
 * @head: head of node
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node, *tmp;

	if (head == NULL)
	{
		return;
	}

	current_node = *head;
	*head = NULL;

	while (head != NULL)
	{
		tmp = current_node->next;
		free(current_node);
		current_node = tmp;
	}
}

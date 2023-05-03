#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: head of node
 * @index: index of linked list
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *temp_node;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp_node = *head;
		*head = temp_node->next;
		free(temp_node);
		return (1);
	}

	prev_node = *head;
	for (i = 0; prev_node != NULL && i < index - 1; i++)
	{
		prev_node = prev_node->next;
	}

	if (prev_node == NULL || prev_node->next == NULL)
	{
		return (-1);
	}

	temp_node = prev_node->next;
	prev_node->next = temp_node->next;
	free(temp_node);
	return (1);
}

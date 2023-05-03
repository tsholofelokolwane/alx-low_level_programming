#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of node
 * @idx: index of node
 * @n: data
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node;
	unsigned int i;

	/* 1. Check if the given node prev_node is NULL */
	if (head == NULL)
	{
		return (NULL);
	}

	/* 2. Allocate new node */
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* 3. Put in the data */
	new_node->n = n;

	/* Special case: insert at the head */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the previous node */
	prev_node = *head;
	for (i = 0; i < idx - 1 && prev_node != NULL; i++)
	{
		prev_node = prev_node->next;
	}

	/* Check if the index is out of bounds */
	if (prev_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Insert the new node */
	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}

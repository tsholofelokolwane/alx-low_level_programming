#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of node
 * @index: index of node
 *
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0, i;
	listint_t *temp = head;

	/* Count the number of nodes in Linked list */
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}

	/*
	 * Check if value of N is not more than length
	 * more than length of the Linked list
	 */
	if (len <= index)
		return (NULL);
	temp = head;

	/* Get the (len-index+1)th node from the beginning */
	for (i = 1; i < index && temp != NULL; i++)
		temp = temp->next;
	return (temp);
}

#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of node
 *
 * Return: the head node’s data (n), or
 * if the linked list is empty return 0
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int result;

	if (*head == NULL)
	{
		return (0);
	}

	temp = (*head)->next;
	result = (*head)->n;
	free(*head);
	*head = temp;

	return (result);
}

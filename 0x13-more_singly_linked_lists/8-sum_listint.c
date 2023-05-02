#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: head of node
 *
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

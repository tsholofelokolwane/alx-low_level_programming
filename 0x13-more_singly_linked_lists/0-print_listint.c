#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all elements of listint_t list
 * @h: head
 *
 * Return: number of nodes
 */

/* Print all the elements in the linked list */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;
	const listint_t *current_node = h;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		cnt++;
	}

	return (cnt);
}

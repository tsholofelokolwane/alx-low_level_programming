#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all elements of list_t list
 * @h: head
 *
 * Return: number of nodes
 */

/* Print all the elements in the linked list */
size_t print_list(const list_t *h)
{
	int cnt = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->len);
		current_node = current_node->next;
		cnt++;
	}
	printf("[0] (nil)\n");

	return (cnt);
}

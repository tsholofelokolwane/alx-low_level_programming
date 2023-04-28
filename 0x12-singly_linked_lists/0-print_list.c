#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all elements of list_t list
 * @h: head
 *
 * Return: number of nodes
 */

/* Print all the elements in the linked list */
size_t print_list(const list_t *h)
{
	size_t cnt = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		if (current_node->str != NULL)
		printf("[%d] %s\n", current_node->len, current_node->str);
	else
		printf("[0] (nil)\n");
	current_node = current_node->next;
	cnt++;
	}

	return (cnt);
}

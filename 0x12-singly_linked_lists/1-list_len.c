#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - number of elements in linked list
 * @h: head of node
 *
 * Return: count of nodes
 */

size_t list_len(const list_t *h)
{
	int cnt = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		cnt++;
		current_node = current_node->next;
	}

	return (cnt);
}

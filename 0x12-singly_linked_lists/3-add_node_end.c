#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of node
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last; /*used in step 5*/

	/*1. Allocate new_node*/
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/*2. Put in the data*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/*3. This new node is going to be the last node, so make next of it as NULL*/
	new_node->next = NULL;

	/*4. If the Linked list is empty, then make the new node as head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/*5. Else traverse  till the last node*/
	last = *head;
	while (last->next != NULL)
		last = last->next;

	/*6. Change the next of last node*/
	last->next = new_node;
	return (new_node);
}

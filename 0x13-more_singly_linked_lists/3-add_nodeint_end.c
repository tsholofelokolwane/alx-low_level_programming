#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of node
 * @n: integer value of new mode
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last; /*used in step 5*/

	/*1. Allocate new_node*/
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/*2. Put in the data*/
	new_node->n = n;

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
	{
		last = last->next;
	}

	/*6. Change the next of last node*/
	last->next = new_node;
	return (new_node);
}

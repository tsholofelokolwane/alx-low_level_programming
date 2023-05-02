#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head of node
 * @n: integer value of new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*1. allocate node*/
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/*2. put in the data*/
	new_node->n = n;

	/*3. Make next of new node as head*/
	new_node->next = (*head);

	/*4. Make next of new node as head*/
	(*head) = new_node;

	/*5. Return address of new element*/
	return (new_node);
}

#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of node
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	/*1. allocate node*/
	list_t *new_node = malloc(sizeof(list_t));

	/*2. put in the data*/
	new_node->str = strdup(str);

	/*3. Make next of new node as head*/
	new_node->next = (*head);

	/*4. Make next of new node as head*/
	(*head) = new_node;

	/*5. Return address of new element*/
	return (new_node);
}

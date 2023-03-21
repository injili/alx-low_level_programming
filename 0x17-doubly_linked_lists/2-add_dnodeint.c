#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: The pointer to the pointer of the head
 * @n: The int to be added
 *
 * Return: the address to the new element or NULL on failing
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

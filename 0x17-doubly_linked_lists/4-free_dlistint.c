#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - to free the doubly linked list
 * @head: pointer to the head of the linked list
 *
 * Return: no return value
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *temp = current->next;

		free(current);
		current = temp;
	}
	head = NULL;
}

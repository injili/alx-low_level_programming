#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets the element at a certain node
 * @head: head to the first node in the linked list
 * @index: The index to be looked for
 *
 * Return: the node in search
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *get_node;

	count = 0;
	get_node = malloc(sizeof(dlistint_t));
	while (head != NULL)
	{
		if (index == count)
		{
			if (get_node == NULL)
				return (NULL);
			get_node->n = head->n;
			get_node->prev = head->prev;
			get_node->next = head->next;
			break;
		}
		else
		{
			head = head->next;
			count++;
		}
	}
	return (get_node);
}

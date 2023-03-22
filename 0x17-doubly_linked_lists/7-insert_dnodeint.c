#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a certain index
 * @h: the pointer to the pointer to the head of the list
 * @idx: index where the node should be added
 * @n: the data to be added
 *
 * Return: address to the new node or NUKK if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new_node;

	count = 0;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	while (*h != NULL)
	{
		if (count == idx)
		{
			new_node->n = n;
			new_node->prev = (*h)->prev;
			new_node->next = *h;
			(*h)->prev = new_node;
			break;
		}
		h = &((*h)->next);
		count++;
	}

	if(count < idx)
	{
		free(new_node);
		return (NULL);
	}

	return (new_node);
}

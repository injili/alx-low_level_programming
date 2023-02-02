#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to the head of the linked list
 * @idx: index of the list wher the list should be added
 * @n: the integer to be added to the linked list
 *
 * Return: address to the new node
 */

listint_t *inser_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node && i < idx)
			{
				current_node = current_node->next;
				i++;
			}
		current_node->next = current_node;
	}

	return (*head);
}

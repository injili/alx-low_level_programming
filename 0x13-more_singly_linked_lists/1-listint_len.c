#include <stddef.h>
#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked list
 * @h: the pointer to the head of the linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns the length of a linked list
 * @h: the head of the linked list
 *
 * Return: the length of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

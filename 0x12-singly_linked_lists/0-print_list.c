#include <stdlib>
#include <stdio.h>
#include <stddef.h>
#include "list.h"

/**
 * print_list - function to print out all the elements of a list
 * @h: pointer to the head of the linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}

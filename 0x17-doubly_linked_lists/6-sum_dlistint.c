#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of the elements in the list
 * @head: pointer to the first node of the linked list
 *
 * Return: sum of the elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: no return value
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

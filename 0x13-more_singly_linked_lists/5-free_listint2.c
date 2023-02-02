#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL
 * @head: pointer to the head of the linked list
 *
 * Return: no return value
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		temp = {*head}->next;
		free(*head);
		*head = temp;
	}
}

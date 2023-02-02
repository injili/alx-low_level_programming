#include <stddef>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the head of the file
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}

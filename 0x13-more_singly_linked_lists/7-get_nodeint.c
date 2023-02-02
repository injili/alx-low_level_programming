#include "lists.h"

/**
 * get_nodeint_at_index - returns an nth node of a linked list
 * @head: the pointer to the head of the linked list
 * @index: the n in nth
 *
 * Return: the nth node to a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *temp;

	temp = head;
	while (temp != NULL && n < index)
	{
		temp = temp->next;
		n++;
	}
	return (temp ?temp : NULL);
}

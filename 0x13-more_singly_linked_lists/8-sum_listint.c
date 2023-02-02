#include "lists.h"

/**
 * sum_listint - returns the sum of all the integers n
 * @head: pointer to the head of the file
 *
 * Return: the sum of the integers n
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0, n;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp)
	{
		n = temp->n;
		sum += n;
		temp = temp->next;
	}
	return (sum);
}

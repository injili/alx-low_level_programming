#include "lists.h"
#include <stdlib.h>


/**
 * free_list - frees the memory off a list
 * @head: pointer the head of the linked list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

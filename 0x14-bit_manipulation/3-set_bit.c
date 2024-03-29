#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the pointer to the int
 * @index: the index the change happens at
 *
 * Return: 1 if it worked and -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;

	*n = (*n | x);
	return (1);
}

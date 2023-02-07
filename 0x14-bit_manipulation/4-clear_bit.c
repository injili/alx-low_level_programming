#include "main.h"

/**
 * clear_bit - clears a bit by setting the bit toggle
 * @n: pointer to the long int
 * @index: the index at which the bit is to be modified at
 *
 * Return: 1 if it works and -1 if it doesn't
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;

	if (*n && x)
		*n ^= x;

	return (1);
}

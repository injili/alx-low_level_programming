#include "main.h"

/**
 * flip_bits - returns umber f bits you would need
 * to flip to get from one whole number to another
 * @n: the first integer
 * @m: the second integer
 *
 * Return: the count number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int y, count = 0;

	y = n ^ m;

	while (y > 0)
	{
		count++;
		y &= (y - 1);
	}

	return (count);
}

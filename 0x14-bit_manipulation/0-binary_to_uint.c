#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 characters
 *
 * Return: the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int i = 0, y = 2;

	if (b == NULL)
		return (0);

	while (*b != NULL)
	{
		if (*(b + i) != 1 || *(b + i) != 0)
			return (0);
		if (*(b + i) == 1)
		{
		temp = 1 * 2**i;
		}
		else
		{
		}
		i++;
	}

	return (x);
}

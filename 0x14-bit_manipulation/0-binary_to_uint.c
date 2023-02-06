#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 characters
 *
 * Return: the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i = 0;
	int count = 0;

	while (*(b + count) != '\0')
		count++;

	if (count < 1)
		return (0);

	count--;
	while (count >= 0)
	{
		if (*(b + count) == '1')
		{
			num += 1 << i;
		}
		else if (*(b + count) == '0')
		{
			num += 0;
		}
		else
		{
			return (0);
		}

		i++;
		count--;
	}

	return (num);
}

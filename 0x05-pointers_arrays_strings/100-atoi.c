#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string passed to the function
 *
 * Return: multiplication value
 */

int_atoi(char *s)
{
	int count = 0, size = 0, i = 0, p = 1, n = 1, j;

	while (*(s + count) == '-')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) =='-')
			p *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				n *= 10;
			size++;
		}
		count++;
	}

	for (j = count - size; j < count; j++)
	{
		i = i + ((*(s + j) - 48) * m);
		m /= 10;
	}
	return (i * p);
}

#include "main.h"

/**
 * string_toupper - changes lowercases to uppercases in a string
 * @c: pointer to the string
 *
 * Return: c on success
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
		
		i++;
	}

	*(c + i) = 0;

	return (c);
}

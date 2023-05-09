#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: Passes the pointer to the string str
 *
 * Return: On success length of the string.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
	int i;

	if (!s)
		return (0);

	for (i = 1 ; ; i++)
	{
		if (*(s + i) == 0)
			break;
	}

	return (i);
}

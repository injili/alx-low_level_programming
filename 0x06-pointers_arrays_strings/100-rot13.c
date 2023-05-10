#include "main.h"

/**
 * rot13 - does encoding using rot13
 * @c: pointer to the string that is to be encoded
 *
 * Return: the encoded string
 */

char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i + 1] >= 'A' && c[i + 1] < 'N') ||
		(c[i + 1] >= 'a'  && c[i + 1] < 'n'))
			c[i + 1] = c[i + 1] + 13;
		else if ((c[i + 1] > 'M' && c[i + 1] <= 'Z') ||
		(c[i + 1] > 'm' && c[i + 1] <= 'z'))
			c[i + 1] = c[i + 1] - 13;
	}
	return (c);
}

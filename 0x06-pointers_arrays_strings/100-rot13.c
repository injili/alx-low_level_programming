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
		if ((c[i] >= 'A' && c[i] < 'N') || (c[i] >= 'a'  && c[i] < 'n'))
			c[i] += 13;
		else if ((c[i] > 'M' && c[i] <= 'Z') ||	(c[i] > 'm' && c[i] <= 'z'))
			c[i] -= 13;
	}
	return (c);
}

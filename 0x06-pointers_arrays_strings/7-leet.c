#include "main.h"

/**
 * leet - encodes the text into 1337
 * @c: is the string passed to the function
 *
 * Return: the encoded string c
 */

char *leet(char *c)
{
	int i = -1;

	while (*c)
	{
		i++;
		if (*(c + i) == '\0')
			break;

		if (*(c + i) >= 'a' && *(c + i) <= 'z')
		{
			if (c[i] == 'a')
				c[i] = '4';
			else if (c[i] == 'e')
				c[i] = '3';
			else if (c[i] == 'o')
				c[i] = '0';
			else if (c[i] == 't')
				c[i] = '7';
			else if (c[i] == 'l')
				c[i] = '1';
			else
				continue;
		}
		else if (*(c + i) >= 'A' && *(c + i) <= 'Z')
		{
			if (c[i] == 'A')
				c[i] = '4';
			else if (c[i] == 'E')
				c[i] = '3';
			else if (c[i] == 'O')
				c[i] = '0';
			else if (c[i] == 'T')
				c[i] = '7';
			else if (c[i] == 'L')
				c[i] = '1';
			else
				continue;
		}
		else
		{
			continue;
		}
	}
	return (c);
}

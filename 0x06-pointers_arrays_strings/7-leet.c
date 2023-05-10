#include "main.h"

/**
 * leet - encodes the text into 1337
 * @c: is the string passed to the function
 *
 * Return: the encoded string c
 */

char *leet(char *c)
{
	int i, j;
	char leet[] = {'4', '3', '0', '7', '1'};
	char orig[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == orig[j])
			{
				c[i] = leet[j % 5];
				break;
			}
		}
	}
	return (c);
}

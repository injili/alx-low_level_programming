#include "main.h"

/**
 * rot13 - does encoding using rot13
 * @c: pointer to the string that is to be encoded
 *
 * Return: the encoded string
 */

char *rot13(char *c)
{
	int j, i;
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot13[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (c[i] == alpha[j])
			{
				c[i] = rot13[j];
				break;
			}
		}
	}
	return (c);
}

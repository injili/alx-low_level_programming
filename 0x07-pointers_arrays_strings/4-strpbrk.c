#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s:first string
 * @accept:second string
 *
 * Return:pointer to the char in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0' ; i++)
	{
		for (j = 0; *(accept + j) != '\0' ; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ((void *)0);
}

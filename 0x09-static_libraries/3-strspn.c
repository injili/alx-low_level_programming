#include "main.h"

/**
 * _strspn - spans the number of matching characters in strings
 * @s: the first string
 * @accept: the second string
 *
 * Return: the number of matching spanned numbers
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0, x = 0;
	int i, j;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		for (j = 0 ; *(accept + j) != '\0' ; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				x++;
				break;
			}
			if (*(accept + j + 1) == '\0')
				y = 1;
		}
		if (y == 1)
			break;
	}
	return (x);
}

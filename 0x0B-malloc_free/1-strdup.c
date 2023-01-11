#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly created string
 * @str: the string passed to the function
 * 
 * Return: pointer s to the string
 */

char *_strdup(char *str)
{
	char *s;
	int n = 0;
	int i;

	for (i = 0; *(str + i) != 0; i++)
		n++;

	if (n == 0)
		return (0);

	s = malloc(sizeof(char) * n);
	for (i = 0; *(str + i) != 0; i++)
	{
		s[i] = *(str + i);
	}
	return (s);
}

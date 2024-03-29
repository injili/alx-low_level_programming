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
	int n = 1;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; *(str + i) != 0; i++)
		n++;

	s = malloc(sizeof(char) * n);
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
	{
		s[i] = *(str + i);
	}
	return (s);
}

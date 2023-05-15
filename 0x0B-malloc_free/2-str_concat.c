#include "main.h"
#include <stdlib.h>

/**
 * str_concat -concatinates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: string s on success
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j = 0, k = 0, l = 0, n;

	if (s1 == NULL)
		s1 = "";

	if (s1 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != 0; i++)
		j++;
	for (i = 0; *(s2 + i) != 0; i++)
		k++;

	n = j + k + 1;
	s = malloc(sizeof(char) * n);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		if (i < j)
		{
			s[i] = *(s1 + i);
		}
		else
		{
			s[i] = *(s2 + l);
			l++;
		}
	}
	s[i] = '\0';
	return (s);
}

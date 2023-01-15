#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i = 0, j, k = 0;

	while (s1 != '\0')
	{
		i++;
		s1++;
	}

	i = i + n;

	s = malloc(sizeof(char) * i);

	while (s1 != '\0')
	{
		s[k] = s1[k];
		k++;
		s1++;
	}

	while (s2 != '\0')
	{
		j++;
		s2++;
	}
	
	if (j > n)
	{
	}
	else
	{
	}

	return (s);
}

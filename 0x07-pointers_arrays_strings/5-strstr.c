#include "main.h"

/**
 * _strstr - matches two strings
 * @haystack: the bigger string
 * @needle: the smaller string
 *
 * Return: the haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, l;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; *(needle + i) != '\0' ; i++)
	{
		for (j = 0; *(haystack + j) != '\0' ; j++)
		{
			if (*(needle + i) == *(haystack + j))
			{
				k = i;
				l = j;

				while (*(needle + k) == *(haystack + l))
				{
					k++;
					l++;

					if (*(needle + k) == '\0')
						return (haystack + j);
				}
			}
		}
	}
	return ((void *)0);
}

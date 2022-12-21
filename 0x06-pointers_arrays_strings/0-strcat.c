#include "main.h"

/**
 * _strcat - the function concatenates two strings
 * @dest: the destination file
 * @src: the second file
 *
 * Return: the pointer to the destination file
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;
	int j = 0;

	for (len = 1 ; ; len++)
	{
		if (*(dest + len) == 0)
			break;
	}

	i = len;

	while (*src)
	{
		*(dest + len) = *(src + j);
		j++;
		len++;
	}

	*(dest + len) = '\0';

	return (dest);
}

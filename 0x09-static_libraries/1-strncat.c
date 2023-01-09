#include "main.h"

/**
 * _strncat - concatinates string upto a certain byte
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes
 *
 * Return: dest on success
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, j = 0;

	for (len = 1 ; ; len++)
	{
		if (*(dest + len) == 0)
			break;
	}

	while (j < n)
	{
		*(dest + len) = *(src + j);
		if (*(src + j) == 0)
			break;
		j++;
		len++;
	}

	return (dest);
}

#include "main.h"

/**
 * _strncpy - function copies string to another string
 * @dest: is the destination strong
 * @src: is the source string
 * @n: is the number of bytes to be copied
 *
 * Return: the copies string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == 0)
			break;
		i++;
	}

	return (dest);
}

#include "main.h"

/**
 * _memcpy - copies data from one memory location to another
 * @dest: the destination file
 * @src: the source file
 * @n: the number of places to be filled and copied from
 *
 * Return: the dest on success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

#include "main.h"

/**
 * _strcpy - a function to copy a string to another location
 * @dest: the destination array
 * @src: the source array
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}

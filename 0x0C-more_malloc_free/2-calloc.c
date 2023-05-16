/*
 *       (_)
 *  \____/..
 *   (___/\/
 *   || ||
 *
 *   injili
 */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: the array passed to the function
 * @size: the bytes
 *
 * Return: pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *fill;
	unsigned int index;

	if (size == 0 || nmemb == 0)
		return (NULL);

	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);

	fill = mem;
	for (index = 0; index < nmemb * size; index++)
		fill[index] = '\0';

	return (mem);
}

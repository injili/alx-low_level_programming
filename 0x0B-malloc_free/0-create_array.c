#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * @size: the number of elements passed
 * @c: thre char passed to the function
 *
 * Return: a pointer s to thecreated array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		exit(EXIT_FAILURE);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}

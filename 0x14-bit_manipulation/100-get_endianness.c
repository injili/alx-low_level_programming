#include "main.h"

/**
 * get_endianess - returns vallue according to  endianness
 *
 * Return: integer value. 1 if little endian and 0 if big endian
 */

int get_endianess(void)
{
	unsigned int x = 1;
	int i;
	char *c = (char *)&x;

	if (*c)
		i = 1;
	else
		i = 0;

	return (i);
}

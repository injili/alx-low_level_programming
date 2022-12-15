#include "main.h"

/**
 * mul - multiplies two integers
 * @a: The first character passed in
 * @b: The second character passed in
 *
 * Return: On success multi.
 * On error, -1 is returned, and errno is set appropriately.
 */

int mul(int a, int b)
{
	int multi;

	multi = a * b;
	return (multi);
}

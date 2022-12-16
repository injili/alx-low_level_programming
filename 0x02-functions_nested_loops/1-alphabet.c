#include "main.h"

/**
 * print_alphabet - lowercase alphabet
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}

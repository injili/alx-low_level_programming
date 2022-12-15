#include "main.h"

/**
 * print_numbers -prints output
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');
}

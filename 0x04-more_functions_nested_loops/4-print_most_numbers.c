#include "main.h"

/**
 * print_most_numbers - writes the most numbers between 0 and 9
 *
 * Return: On success 0
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar('0' + a);
	}
	_putchar('\n');
}

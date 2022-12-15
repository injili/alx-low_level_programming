#include "main.h"

/**
 * print_line - prints out a line
 * @n: The number of times a line is printed
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
	return;
}

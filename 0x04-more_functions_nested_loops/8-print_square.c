#include "main.h"

/**
 * print_square - draws a square
 * @size: square dimensions
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		if (size > 0)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: how big the triangle gon be
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int a;
		int b = size - 1;
		int d;
		int c;
		int e;

		for (a = 0; a < size; a++)
		{
			for (d = 0; d < b; d++)
			{
				_putchar(' ');
			}
			c = size - b;
			for (e = 0; e < c; e++)
			{
				_putchar('#');
			}
			_putchar('\n');
			b--;
		}
	}
	else
	{
		_putchar('\n');
	}
}

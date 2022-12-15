#include "main.h"

/**
 * print_diagonal - writes the \ character diagonally
 * @n: The character passed to the function
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagonal(int n)
{
	int a;
	int x;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('\\');
			if (a == n)
			{
				break;
			}
			else
			{
				_putchar('\n');
				x = a;
				while (x)
				{
					_putchar(' ');
					x--;
				}
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

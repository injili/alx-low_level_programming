#include "main.h"
/**
 * print_times_table - prints the times table of te number passed
 * @n: integer passed to the function
 *
 * Return: no return value
 */

void print_times_table(int n)
{
	int a, b, d, c = n + 1;

	if (n < 15 && n >= 0)
	{
		for (a = 0; a < c; ++a)
		{
			for (b = 0; b < c; ++b)
			{
				d = a * b;
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (d < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (d < 100)
					{
						_putchar(' ');
					}
				}
				if (d < 10)
				{
					_putchar(d + '0');
				}
				else if (d < 100)
				{
					_putchar((d / 10) + '0');
					_putchar((d % 10) + '0');
				}
				else
				{
					_putchar((d / 100) + '0');
					_putchar(((d / 10) % 10) + '0');
					_putchar((d % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}

}

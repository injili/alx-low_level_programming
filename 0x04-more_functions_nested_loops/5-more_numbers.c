#include "main.h"

/**
 * more_numbers - outputs rows of 15 numbers 0 to 14
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

void more_numbers(void)
{
	long int a;
	long int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b < 10)
			{
				_putchar(b + '0');
			}
			else
			{
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * more_numbers - outputs rows of 15 numbers 0 to 14
 * @void: no argument is passed to the function
 *
 * Return: 0 on success.
 * On error, -1 is returned, and errno is set appropriately.
 */

void more_numbers(void)
{
	int a;
	int b;

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
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

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
	int a, b, c, i;

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
				for (i = 0; i < 2; i++)
				{
					if (i == 0)
						c = b / 10;
					else
						c = b % 10;
					_putchar(c + '0');
				}
			}
		}
		_putchar('\n');
	}
}

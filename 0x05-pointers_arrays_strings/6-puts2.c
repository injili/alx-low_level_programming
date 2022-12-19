#include "main.h"

/**
 * puts2 - prints every other number starting from the first character
 * @str: the string passed to the function
 *
 * Return 0 on success
 */

void puts2(char *str)
{
	int i = 2;

	while (*str)
	{
		if (i % 2 == 1)
		{
			i++;
			str++;
			continue;
		}
		else
		{
			i++;
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}

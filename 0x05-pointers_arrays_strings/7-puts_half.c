#include "main.h"

/**
 * puts_half - prints out half of the string
 * @str: the string passed to the function
 *
 * Return 0 on success
 */

void puts_half(char *str)
{
	int i;
	int a;

	for (i = 0 ; ; i++)
	{
		if (*(str + i) == 0)
			break;
	}

	if (i % 2 == 1)
		i--;
	a = i / 2;

	while (i)
	{
		if (i > a)
		{
			str++;
			i--;
			continue;
		}
		else
		{
			_putchar(*str);
			str++;
			i--;
		}
	}
	_putchar('\n');
}

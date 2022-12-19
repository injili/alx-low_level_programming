#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string passed to the function
 *
 * Return: 0 on success
 */

void print_rev(char *s)
{
	int i;
	int a;

	for (i = 1 ; ; i++)
	{
		if (*(s + i) == 0)
			break;
	}

	for (a = i - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

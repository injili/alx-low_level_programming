#include "main.h"

/**
 * _puts - prints out the value in the string
 * @str: the string to be printed
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _print_rev_recursion - prints a reverse string
 * @s: pointer to a memory block
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

#include "main.h"

/**
 * print_last_digit - submits the last digit to putchar
 * @i: The character passed to the function
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int i)
{
	int last;

	last = i % 10;

	return (last);
}

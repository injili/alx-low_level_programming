#include "main.h"

/**
 * main - contains the main prog
 * @c: The character to print
 *
 * Return: On success 0
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

int main(void)
{
	char *r = "_putchar\n";

	while (*r)
	{
		_putchar(*r++);
	}

	return (0);
}

#include <stdio.h>
/**
 * main - the main program function
 * @void: no argument passed to function main
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar((number % 10) + '0');
		if (number == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}

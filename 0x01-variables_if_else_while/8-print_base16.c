#include <stdio.h>
/**
 * main - the main function of the program
 * @void: no argument received
 *
 * Return: on successful execution, 0
 */
int main(void)
{
	int i;
	char l;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}

	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}

	putchar('\n');

	return (0);
}

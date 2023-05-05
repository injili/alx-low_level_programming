#include <stdio.h>

/**
 * main - the main function of the program
 * @void: the function receives no argument
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}

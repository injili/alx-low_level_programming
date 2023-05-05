#include <stdio.h>

/**
 * main - the main function to the program
 * @void: function main is receiving no arguments
 *
 * Return: 0 on successful execution
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

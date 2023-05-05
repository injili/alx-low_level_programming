#include <stdio.h>
/**
 * main - the main function of the program
 * @void: main function receives no arguments
 *
 * Return: 0 on successful execution
 *
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

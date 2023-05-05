#include <stdio.h>
/**
 * main - main function of the program
 * void: function main receives np arguments
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int long i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}

	putchar('\n');

	return (0);
}

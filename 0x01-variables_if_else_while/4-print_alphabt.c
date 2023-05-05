#include <stdio.h>
/**
 * main - the main function of the program
 * @void: the function receives no function arguments
 *
 * Return: 0 on succesful running of the code
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		putchar(i);
	}

	putchar('\n');

	return (0);
}

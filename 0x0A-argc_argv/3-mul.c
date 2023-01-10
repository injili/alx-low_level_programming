#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments
 * @argc: the argument count
 * @argv: the arguments
 *
 * Return: on success 0 and on error 1
 */

int main(int argc, char **argv)
{
	int mul;
	int i;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		i = 0;
	}
	else
	{
		printf("Error\n");
		i = 1;
	}
	return (i);
}

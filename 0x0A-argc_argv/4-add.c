#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the arguments count
 * @argv: the arguments
 *
 * Return: 0 on success and 1 on failure
 */

int main(int argc, char *argv[])
{
	int x, sum = 0, i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (x = 0; argv[i][x]; x++)
			{
				if (isdigit(argv[i][x]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		}

		for (i = 1; i < argc; i++)
			sum += atoi(argv[i]);
		printf("%d\n", sum);
	}
	return (0);
}

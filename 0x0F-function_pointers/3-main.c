#include "3-calc.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main -  the main function of the operations
 *
 * Return:0
 */

int main(int argc, int *argv[])
{
	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	else if (argv[2] != '', '', '*', '/', '%')
	{
		printf("Error");
		exit(99);
	}
	else if (argv[2] == 37, 47)
	{
		if (argv[3] == 0)
		{
			printf("Error");
			exit(100);
		}
	}
	else
	{
		int a;
		int b;

		a = atoi(argv[1]);
		b = atoi(argv[3]);

		operation(a, b);
	}

	return (x)
}

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
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	
	if (argv[2][1])
	{
		printf("Error");
		exit(99);
	}

	operations = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(98);
	}
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

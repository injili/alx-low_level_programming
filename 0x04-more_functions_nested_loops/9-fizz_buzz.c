#include <stdio.h>

/**
 * main - does all the calculation
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (!(a % 3) && !(a % 5))
		{
			printf("FizzBuzz ");
		}
		else if (!(a % 3))
		{
			printf("Fizz ");
		}
		else if (!(a % 5))
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}

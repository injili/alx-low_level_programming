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
	int b;
	int c;

	for (a = 1; a <= 100; a++)
	{
		b = a % 3;
		c = a % 5;
		if (b == 0 && c == 0)
		{
			printf("FizzBuzz ");
		}
		else if (b == 0)
		{
			printf("Fizz ");
		}
		else if (c == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
		printf(" ");
	}
	return (0);
}

#include <stdio.h>

int main()
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar((number % 10) + '0');
		if (number == 9)
			continue;
		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
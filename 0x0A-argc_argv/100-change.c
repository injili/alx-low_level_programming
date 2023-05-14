#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - prints out the minimum number of coins to make change
 * @argc: the count of arguments passed to the function
 * @argv: the arguments passed to the function main
 *
 * Return: 0 on successful execution
 */
int main(int argc, char *argv[])
{
	int cent, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	count = 0;
	if (cent < 0)
	{
		printf("0\n");
	}
	else
	{
		if (cent >= 25)
		{
			count += cent / 25;
			cent = cent % 25;
		}
		if (cent >= 10)
		{
			count += cent / 10;
			cent = cent % 10;
		}
		if (cent >= 5)
		{
			count += cent / 5;
			cent = cent % 5;
		}
		if (cent >= 2)
		{
			count += cent / 2;
			cent = cent % 2;
		}
		if (cent >= 1)
			count += cent;
		printf("%d\n", count);
	}
	return (0);
}

#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - prints natural numbers upto 98
 * @n: number passed to the function
 *
 * Return: no return value
 */
void print_to_98(int n)
{
	if (n > 97)
	{
		for (; n > 97; --n)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (; n < 99; ++n)
		{
			printf("%d", n);
			if (n != 98)
				{
					printf(", ");
				}
		{
	}
	printf("\n");
}

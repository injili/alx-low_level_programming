#include "main.h"
/**
 * print_to_98 - prints natural numbers upto 98
 * @n: number passed to the function
 *
 * Return: no return value
 */
void print_to_98(int n)
{
	int a = 0;

	if (n > 97)
	{
		for (; n > 97; --n)
		{
			if (n >= 100)
			{
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n < 99; ++n)
		{
			if (n < 0)
			{
				_putchar('-');
				a = -n;
			}
			else
			{
				a = n;
			}
			if (a >= 10)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			else
			{
				_putchar(a + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * root_op - does the calculation
 * @a: input number
 * @b: iterator
 *
 * Return: square root
 */

int root_op(int a; int b)
{
	if (b % (a / b) == 0)
	{
		if (b * (a / b) == a)
			return (b);
		else
			return (-1);
	}
}

/**
 * _sqrt_recursion - finds the square root of a number through recursion
 * @n: the number passed to the function
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (root_op(n, 2));
}

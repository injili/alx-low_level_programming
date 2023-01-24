#include "main.h"

/**
 * root_op - does the calculation
 * @n: input number
 * @b: iterator
 *
 * Return: square root
 */

int root_op(int n, int b)
{
	if (b % (n / b) == 0)
	{
		if (b * (n / b) == n)
			return (b);
		else
			return (-1);
	}
	return (0 + root_op(n, b + 1));
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
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (root_op(n, 2));
}

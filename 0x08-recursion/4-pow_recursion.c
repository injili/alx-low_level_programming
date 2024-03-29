#include "main.h"

/**
 * _pow_recursion - calculates to the power of...
 * @x: the number
 * @y: the power
 *
 * Return: the value of x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, y - 1)));
}

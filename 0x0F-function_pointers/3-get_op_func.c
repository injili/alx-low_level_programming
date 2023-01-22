#include "3-calc.h"

/**
 * get_op_function - gets the the function that matches the operation asked for
 * @s: the operator passed as argument to the program
 *
 * Return: a pointer to the function required
 */

int (*get_op_func(char *s))(int, int)
{
	return (&op_add);
}

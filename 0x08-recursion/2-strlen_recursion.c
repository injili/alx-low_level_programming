#include "main.h"

/**
 * _strlen_recursion - finds out the length of a string
 * @s: the string passed to the function
 *
 * Return: the length int value
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

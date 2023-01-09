#include "main.h"

/**
 * _isdigit - determines whether c is an integer or not
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isdigit(int c)
{
	int i;
	int x;
	int N = c - '0';

	for (i = 0; i < 10; i++)
	{
		if (i == N)
		{
			x = 1;
			break;
		}
		else if (i == 9)
		{
			x = 0;
		}
		else
		{
			continue;
		}
	}
	return (x);
}

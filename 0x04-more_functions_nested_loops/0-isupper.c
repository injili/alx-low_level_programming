#include "main.h"

/**
 * _isupper - determines the case of the input
 * @c: the character passed in
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 */

int _isupper(int c)
{
	int i;
	int x;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			x = 1;
		}
		else if (i == 'Z')
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

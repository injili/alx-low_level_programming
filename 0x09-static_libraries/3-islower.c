#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @c: The character passed to the cunction
 *
 * Return: On success x.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(int c)
{
	char a = c;
	int i;
	int x;

	for (i = 'a'; i <= 'z'; ++i)
	{
		if (i == a)
		{
			x = 1;
			break;
		}
		else if (i == 'z')
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

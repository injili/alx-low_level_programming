#include "main.h"

/**
 * _isalpha - checks for alphabet charecters
 * @c: The character to passed
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

void capital(char d);

int _isalpha(int c)
{
	char y = c;
	char q;
	char w;
	int x;

	for (q = 'a'; a <= 'z'; ++a)
	{
		if (q == y)
		{
			x = 1;
			break;
		}
		else if (q == 'z')
		{
			x = capital(y);
			break;
		}
		else
		{
			continue;
		}
	}
	return (x);
}

void capital(char d)
{
	for (w = 'A' ; w <= 'Z'; ++w)
	{
		if (d == w)
		{
			x = 1;
			break;
		}
		else if (w == 'Z')
		{
			x = 0;
			break;
		}
		else
		{
			continue;
		}
	}
}

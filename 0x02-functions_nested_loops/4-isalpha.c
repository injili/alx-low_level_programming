#include "main.h"

void capital(char d);

int _isalpha(int c)
{
	char y = c;
	char q;
	char w;

	for (q = 'a'; a <= 'z'; ++a)
	{
		if (q == y)
		{
			return 1;
			break;
		}
		else if (q == 'z')
		{
			capital(y);
			break;
		}
		else
		{
			continue;
		}
	}
}

void capital(char d)
{
	for (w = 'A' ; w <= 'Z'; ++w)
	{
		if (d == w)
		{
			return 1;
			break;
		}
		else if (w == 'Z')
		{
			return 0;
			break;
		}
		else
		{
			continue;
		}
	}
}

#include "main.h"

int main()
{
	char c;
	int i;

	while (i<10)
	{
		for (c = 'a'; c <= 'z'; ++c)
			_putchar(c);
		
		_putchar('\n')
		i++;
	}

	return (0);
}

#include <stdio.h>

int main()
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'p' | i == 'e')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}

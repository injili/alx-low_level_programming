#include "main.h"

void print_times_table(int n)
{
	int a;
	int b;
	int c = n+1;
	int d;

	if (n > 0)
	{
		if (n < 15)
		{
			for (a = 0; a < c; ++a)
			{
				for (b = 0; b < c; ++b)
				{
					d = a*b;
					_putchar(d);
					_putchar(',   ');
				}
				_putchar('\n');
			}
		}
	}
}

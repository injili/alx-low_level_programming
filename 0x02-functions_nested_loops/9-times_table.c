#includes "main.h"

void times_tables(void)
{
	int i;
	int a;
	int x;

	for (i = 0; i < 10; ++i)
	{
		for(a = 0; a < 10; ++a)
		{
			x = i*a;
			_putchar(x);
			_putchar(', ');
		}

		_putchar('$');
		_putchar('\n');
	}
	return 0;
}

#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
	if (n > 97 )
	{
		for (n; n >97; --n)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n; n < 99; ++n)
		{
			printf("%d, ", n);
		}
	}
	printf('\n');
}

#include "main.h"

void jack_bauer(void);
{
	int minute, hour;

	for (hour = 0 ; hour < 24 ; ++hour)
	{
		for (minute = 0; minute < 60 ; ++minute)
		{
			_putchar(hour/10);
			_putchar(hour%10);
			_putchar(':');
			_putchar(minutes/10);
			_putchar(minutes%10);
			_putchar('\n');
		}
	}
}

#include "main.h"

int _islower(int c)
{
	char a = c;
	char i;
	for (i = 'a'; i <= 'z'; ++i)
	{
		if (i == a)
		{
			return 1;
			break;
		}
		else if (i == 'z')
		{
			return 0;
		}
		else
		{
			continue;
		}
			
	}

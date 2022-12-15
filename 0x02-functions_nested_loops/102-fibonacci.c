#include <stdio.h>

int main()
{
	int sum;
	int a;

	for (a = 3; a < 1024; ++a)
	{
		int b,c;
		b = a%3;
		c = a%5;

		if (b == 0)
		{
			sum = sum+a;
		}
		else
		{
			if (c == 0)
				sum = sum+a;
		}
	}

	printf("%d \n", sum);

	return 0;
}

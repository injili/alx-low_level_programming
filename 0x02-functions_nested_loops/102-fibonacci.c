#include <stdio.h>

int main()
{
	int i;
	int a = 1;
	int b = 2;
	int c;
	for (i = 0; i < 50; ++i)
	{
		printf("%d, ", a);
		c = a+b;
		a = b;
		b = c;

	}
	printf("\n");
	return 0;
}

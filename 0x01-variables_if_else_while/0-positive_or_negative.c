#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - the main function of the program
 * @void - the function receives no arguments
 *
 * Return - the function returns 0 if executed properly. 
 */




int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else 
		printf("%d is zero\n", n);
	return (0);
}

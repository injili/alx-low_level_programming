#include <stdio.h>

/**
 * main - the function that prints out the file name it was executed from
 * @void - it receives no arguments
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

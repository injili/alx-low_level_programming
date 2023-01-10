#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: the count of arguments
 * @argv: the argument storing array
 *
 * Return: on success 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>

/**
 * main - the main function prints out the program name
 * @argc: the argument count
 * @argv: the argument variables passed in the termminal
 *
 * Return: on success 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

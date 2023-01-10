#include <stdio.h>
/**
 * main - prints out all new arguments on new lines
 * @argc: the count of arguments
 * @argv: the argument store
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

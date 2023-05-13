#include "main.h"
#include <ctype.h>
/**
 * main - prints out the minimum number of coins to make change
 * @argc: the count of arguments passed to the function
 * @argv: the arguments passed to the function main
 *
 * Return: 0 on successful execution
 */
int main(int argc, char *argv [])
{
	if (argc == 1)
		_putchar('0');
	char *str = argv[1];
	if (!isdigit(*str))
	{
		_putchar("Error');

	return (0);
}

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
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int cent = 0;
	
	cent = atoi(argv[1]);
	if (cent < 0)

		printf("0\n");

	return (0);
}

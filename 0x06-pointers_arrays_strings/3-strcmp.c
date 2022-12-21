#include "main.h"

/**
 * _strcmp - function does compare two strings returning the difference
 * @s1: first string
 * @s2: second string
 *
 * Return: the diffrence
 */

int _strcmp(char *s1, char *s2)
{
	int dif = 0, i = 0;

	while (dif == 0)
	{
		if ((*(s1 + i) == 0) && (*(s2 + i) == 0))
			break;
		dif = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (dif);
}

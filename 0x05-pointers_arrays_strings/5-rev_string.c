#include "main.h"

/**
 * rev_string - reverses the order of a string
 * @s: the string passed to the function
 *
 * Return : 0 on success
 */

void rev_string(char *s)
{
	char temp;
	int i;
	int length0;
	int length1;

	for (length0 = 1 ; ; length0++)
	{
		if (*(s + length0) == 0)
			break;
	}

	length1 = length0 - 1;

	for (i = 0; i < length0 / 2; i++)
	{
		temp = s[i];
		s[i] = s[length1];
		s[length1--] = temp;
	}
}

#include "main.h"

/**
 * _strchr - scans for a charcter
 * @s: pointer to the string
 * @c: the character to be found
 *
 * Return: pointer to the character if found and if not a null byte
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			break;
		}
		i++;
	}
	return (s + i);
}

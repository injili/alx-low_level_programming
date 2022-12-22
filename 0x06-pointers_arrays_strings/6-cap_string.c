#include "main.h"

/**
 * cap_string - capitalizes each word
 * @c: the pointer passed to the function
 *
 * Return: the pointer on success
 */

char *cap_string(char *c)
{
	int i = 0;
	int j;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (*(c + i) != '\0')
	{
		j = 0;

		while (*(sep + i) != '\0')
		{
			if (*(c + i) == sep[j])
			{
				if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				{
					c[i + 1] = c[i + 1] - 32;
					break;
				}
			}

			j++;
			if (*(sep + j) == 0)
				break;
		}
		i++;

		if (*(c + i) == 0)
			break;
	}

	return (c);
}

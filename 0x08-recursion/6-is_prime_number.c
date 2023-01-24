#include "main.h"

/**
 * is prime - finds out whether a number is prime or not
 * @n:  input number
 * @b: iterator
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime(unsigned int n, unsigned int b)
{
	if (n % b == 0)
	{
		if (n == b)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, b + 1));
}

/**
 * is_prime_number - finds out whether a number is prime or not
 * @n: input no.
 *
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}

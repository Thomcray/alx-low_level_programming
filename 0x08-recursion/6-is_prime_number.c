#include "main.h"
int prime_checker(int n, int i);
/**
 * is_prime_number - executes prime_checker
 * @n: param to check
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * prime_checker - checks for prime number
 * @n: parameter to check
 * @i: n / 2, then passes it to i - 1, checks if greater than 0
 *
 * Return: prime_check
 */

int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}

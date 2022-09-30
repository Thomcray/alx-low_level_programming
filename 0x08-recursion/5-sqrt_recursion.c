#include "main.h"
int squareroot(int n, int root);

/**
 * squareroot - finds the natural square root ofa number
 * @n: number to fint the root of
 * @root: root to be tested
 *
 * Return: the squre root if the number has a natural square root
 * -1 if the number has no natural square root
 */

int squareroot(int n, int root)
{
	if ((root * root) == n)
		return (root);
	if (root == n / 2)
		return (-1);

	return (squareroot(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return square root of
 *
 * Return: natural square root of n or -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (squareroot(n, root));
}

#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

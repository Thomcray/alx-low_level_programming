#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array, followed by a new
 * line. Numbers must ne separated b comma
 * @a: array name
 * @n: number of elements in the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		printf("%d, ", a[i]);

		if (i == (n - 1))
			printf("%d", a[n - 1]);
	}

	printf('\n');
}



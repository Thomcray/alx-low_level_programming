#include <stdio.h>
#include "main.h"

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

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == (n - 1))
			continue;

		printf(", ");
	}

	printf("\n");
}

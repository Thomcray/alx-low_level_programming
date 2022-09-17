#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: parameter
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar('\\');


		putchar('\n');
	}
	putchar('\n');
}

#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: parameter
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n == 0 || n < 0)
		{
			putchar('\n');
		}
		else
			putchar('_');
	}
	putchar('\n');
}

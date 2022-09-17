#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: parameter
 *
 * Return: void
 */

void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				putchar('#');
			}

			if (row == size - 1)
				continue;
			putchar('\n');
		}
	}
	putchar('\n');
}


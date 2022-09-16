#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9, followed by new line
 * Do not print 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			putchar((num % 10) + '0');
	}

	putchar('\n');
}

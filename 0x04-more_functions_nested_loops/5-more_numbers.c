#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0-14, followed
 * by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			putchar(j + '0');
		}
	}
	putchar('\n');
}

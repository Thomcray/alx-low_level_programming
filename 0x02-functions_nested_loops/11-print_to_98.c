#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Function that prints all natural numbers from
 * 0 - 98, followed by a new line
 * @n: First printed number
 */

void print_to_98(int n)
{
	int i, j;

	for (i = n; i < 99; i++)
	{
		if ((i < 98 && i > 0 && i > 81) || (i < 0 && i < n) || (i > n))
		{
			putchar(',');
			putchar(' ');
		}
		printf("%d", i);
	}

	if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			if ((j > 98 && j < n) || (j < n))
			{
				putchar(',');
				putchar(' ');
			}
			printf("%d", j);
		}
	}
	putchar('\n');
}

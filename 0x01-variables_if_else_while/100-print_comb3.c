#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i  = 0; i < 8; i++)
	{
		for (j = 1; j < 9; j++)
		{
			if (i != j)
			{
				putchar('0' + i);
				putchar('0' + j);

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

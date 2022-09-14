#include "main.h"

/**
 * print_alphabet_x10 - Prints x10 of the alphabets in lowercase
 *
 * Return: No return value
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}
	putchar('\n');
}

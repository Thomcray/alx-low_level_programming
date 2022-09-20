#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: parameter
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (j = (count - 1); j >= 0; j++)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}

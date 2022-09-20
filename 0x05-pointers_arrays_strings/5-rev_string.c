#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (j = count - 1; j >= 0; j++)
	{
		_putchar(s[j]);
	}
}

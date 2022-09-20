#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter
 *
 * Return: void
 */

void rev_string(char *s)
{
	char rev = s[0];
	int i, j, count = 0;

	for (i = 0; s[count] != '\0'; i++)
	{
		count++;
	}

	for (j = 0; j < count; j++)
	{
		count--;
		rev = s[j];
		s[j] = s[count];
		s[count] = rev;
	}
}

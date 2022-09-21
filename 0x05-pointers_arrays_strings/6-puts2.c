#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with
 * the first character, followed by a new line
 *@str: parameter
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i <= str[i]; i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}

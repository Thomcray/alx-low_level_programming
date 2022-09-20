#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string parameter
 *
 * Return: number of characters in *s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}

	return (length);
}

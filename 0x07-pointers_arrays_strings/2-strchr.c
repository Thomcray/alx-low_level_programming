#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s: the parameter string to be scanned
 * @c: second parameter character to be scanned in s
 *
 * Return: a pointer to the firstoccurrence of the character c
 * in the string s, or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

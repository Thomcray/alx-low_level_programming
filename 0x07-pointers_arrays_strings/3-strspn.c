#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes it consists
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, value, check;

	value = 0;

	for (i = 0; s[i] = '\0'; i++)
	{
		check = 0;

		for (j = 0; accept[j] = '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				value++;
				check = 1;
			}
		}

		if (check == 0)
		{
			return (value);
		}
	}
	return (value);
}

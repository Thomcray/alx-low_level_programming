#include "main.h"

/**
 * _memset - a function that fills all the first n bytes of the
 * memory
 * @s: first parameter, array
 * @b: second parameter, constant byte
 * @n: third parameter, size of s
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

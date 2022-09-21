#include "main.h"

/**
 * _strcpy - copies the string pinted to the src, including
 * null byte (\0), to the buffer pointed to by dest
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

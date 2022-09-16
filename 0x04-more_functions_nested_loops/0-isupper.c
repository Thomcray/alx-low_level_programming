#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: parameter
 *
 * Return: Returns 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

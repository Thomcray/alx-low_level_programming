#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Character to check
 *
 * Return: Return 0 if an alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: Character to check
 *
 * Return: Return 1 if lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

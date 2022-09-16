#include "main.h"

/**
 * _isdigit - Checks for digit
 * @c: parameter
 *
 * Return: Returns 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	for (c = 48; c <= 57; c++)
	{
		if (int isdigit(c))
			return (1);
		else
			return (0);
	}
}

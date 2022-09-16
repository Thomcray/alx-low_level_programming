#include "main.h"

/**
 * _isdigit - Checks for digit
 * @c: parameter
 *
 * Return: Returns 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	for (c = 0; c < 10; c++)
	{
		if (isdigit(c))
			return (1);
		else
			return (0);
	}
}

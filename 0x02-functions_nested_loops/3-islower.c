#include "main.h"

/**
 * main - Checks for lowercase character
 *
 * Return: Return 1 if lowercase, otherwise 0
 */

int main(void)
{
	int res;

	res = _islower("c");
	if (islower(res))
	{
		_putchar(res + '0');
		return (1);
	}
	return (0);
}

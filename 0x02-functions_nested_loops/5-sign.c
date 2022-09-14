#include "main.h"

/**
 * print_sign - Prints the sign if anumber
 * @n: Number to check
 *
 * Return: Returns 1 if greater than 0, 0 if < 0, otherwise -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}



#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: Number parameter passed to function
 *
 * Return: Always 0
 */

int print_last_digit(int num)
{
	int res;

	res = num % 10;
	if (res < 0)
		res = -1 * res;

	_putchar(res + '0');

	return (0);
}

#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @num: number to compute
 *
 * Return: Absolute value of num
 */

int _abs(int num)
{
	return (num * ((num > 0) - (num < 0)));
}

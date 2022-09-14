#include "main.h"
/**
 * print_alphabet - Function handling the printing of a to z in lowercase
 *
 * Return: No return value
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();

	_putchar('\n');
	return (0);
}

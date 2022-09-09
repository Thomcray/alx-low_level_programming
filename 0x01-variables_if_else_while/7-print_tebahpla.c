#include <stdio>

/**
 * main - Prints the alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char j;

	for (j = 'z'; j >= 'a'; j--)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

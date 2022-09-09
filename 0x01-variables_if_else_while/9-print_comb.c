#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit separated by ,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}

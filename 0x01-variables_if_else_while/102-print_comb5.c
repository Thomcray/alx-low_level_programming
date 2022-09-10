#include <stdio.h>

/**
 * main - Prints all possible combinations of the digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i == 99 && j == 99)
			{
				break;
			}

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

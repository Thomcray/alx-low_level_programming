#include <stdio.h>

/**
 * main - Prints all possible combinations of the digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

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

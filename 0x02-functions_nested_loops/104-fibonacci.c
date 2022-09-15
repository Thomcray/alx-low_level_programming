#include <stdio.h>

/**
 * main - Find the first 98 fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long first = 0, second = 1, sum;

	for (i = 0; i <= 98; i++)
	{
		sum = first + second;
		printf("%lu", sum);

		if (i != 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		first = second;
		second = sum;
	}
	return (0);
}

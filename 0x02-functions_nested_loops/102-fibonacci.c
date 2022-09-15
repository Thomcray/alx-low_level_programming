#include <stdio.h>

/**
 * main - Prints first 50 fibonacci, starting with 1 and 2
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long first = 0, second = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = first + second;
		printf("%lu", sum);

		first = second;
		second = sum;

		if (i < 49)
			printf(", ");
		else
			printf("\n");
	}
	printf("\n");
	return (0);
}

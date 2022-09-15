#include <stdio.h>

/**
 * main -Prints the sum of the even valued terms, followed by
 * new line. Sequence values do not exceed 4,000,000
 *
 * Return: Always 0
 */

int main(void)
{
	int i, total_sum;
	unsigned long first = 0, second = 1, sum;

	for (i = 0; i < 4000000; i++)
	{
		sum = first + second;

		if ((sum % 2) == 0)
		{
			total_sum += sum;
		}

		first = second;
		second = sum;
	}
	printf("%d\n", total_sum);
	return (0);
}
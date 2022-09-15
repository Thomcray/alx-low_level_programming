#include <stdio.h>

/**
 * main -Prints the sum of the even valued terms, followed by
 * new line. Sequence values do not exceed 4,000,000
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long first = 0, second = 1, sum;
	float total_sum;

	while (1)
	{
		sum = first + second;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;
		first = second;
		second = sum;
	}
	printf("%.0f\n", total_sum);
	return (0);
}

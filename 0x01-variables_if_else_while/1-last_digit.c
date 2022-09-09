#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Checks if n is greater than 5, is zero or less than six
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n);
	} else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n);
	}
	return (0);
}

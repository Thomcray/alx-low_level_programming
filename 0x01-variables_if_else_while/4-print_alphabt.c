#include <stdio.h>

/**
 * main - Prints all letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= alp[i]; i++)
	{
		if ((alp[i] != "e") && (alp[i] != "q"))
		{
			putchar(alp[i]);
		}
	}
	putchar('\n');
	return (0);
}

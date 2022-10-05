#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your programs
 * @ac: number of arguments passed to the program
 * @av: array of pointers to the arguments
 *
 * Return: NULL if ac == 0 or av == NULL, Otherwise - each
 * argument should be followed by a \n in the new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, str_index = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[str_index] = av[i][j];
			str_index++;
		}

		if (str[str_index] == '\0')
			str[str_index++] = '\n';
	}

	return (str);
}

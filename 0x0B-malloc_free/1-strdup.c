#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a function to a newly allocated space
 * in memory, which contains a copy of the string given as
 * a parameter.
 * @str: string str
 *
 * Return: NULL if str=NULL. on success, the _strdup function
 * returns a pointer to the duplicated string. it returns NULL
 * if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *duple;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	duple = malloc((sizeof(char) * (len + 1)));

	if (duple == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duple[i] = str[i];
	duple[i] = '\0';

	return (duple);
}

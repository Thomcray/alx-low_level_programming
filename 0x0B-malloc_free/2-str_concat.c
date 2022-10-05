#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first content string
 * @s2: second content string
 *
 * Return: s1 followed by the contents of s2, and NULL terminated.
 * function should return NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, i_concat, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat = malloc((sizeof(char) * len));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[i_concat++] = s1[i];

	for (i = 0; s2[i]; i++)
	{
		concat[i_concat++] = s2[i];
	}

	return (concat);
}

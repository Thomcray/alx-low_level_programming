#include "main.h"
int length_c(char *s);
int palindrome(char str[], int st, int end);

/**
 * is_palindrome - Entry point
 * @s: param
 *
 * Return: 0
 */

int is_palindrome(char *s)
{
	int len;

	len = length_c(s);

	if (len == 0)
		return (1);
	return (palindrome(s, 0, len - 1));
}

/**
 * length_c - finds length count
 * @s: param
 * Return: length size
 */
int length_c(char *s)
{
	if (*s != '\0')
		return (1 + length_c(s + 1));
	return (0);
}

/**
 * palindrome - checks if start and end of string matches
 * @str: string
 * @st: start of string 0
 * @end: end of string from is_palindrome, from length_c
 * Return: if string is a palindrome
 */

int palindrome(char str[], int st, int end)
{
	if (st >= end)
		return (1);
	if (str[st] != str[end])
		return (0);
	if (st <= end || st < end + 1)
		return (palindrome(str, st + 1, end - 1));
	return (1);
}

#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - if a string is a palindrome check
 * @s: reverse the string
 *
 * Return: 1 if it is, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - the char recursively checks for the palindrome
 * @s: check the string
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

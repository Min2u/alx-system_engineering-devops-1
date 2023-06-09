#include "main.h"

/**
 * _strlen_recursion - The length of a string to be returns
 * @s: strin to be excuted
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int longit - 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}

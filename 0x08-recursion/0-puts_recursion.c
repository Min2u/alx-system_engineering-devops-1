#include "main.h"

/**
 * _putchar_reursion - function
 * @s: the input
 * Return: Always 0 (sucess)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

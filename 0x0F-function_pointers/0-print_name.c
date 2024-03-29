#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - by using pointer to function prints name
 * @f: pointer to function
 * @name: string to add
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

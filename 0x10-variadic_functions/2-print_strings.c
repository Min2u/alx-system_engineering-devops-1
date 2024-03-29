#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - to print strings followed by a new line
 * @n: num of strings passed to the function
 * @separator: string to be printed between strings
 * @...: variable num of strings to be printed
 *
 * Description: if separator is NULL, it is no printed
 * if one of the strings is NULL, (nil) is printed intstead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

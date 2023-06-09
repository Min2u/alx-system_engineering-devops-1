#include "main.h"

/**
 * factorial - returns factorial num
 * @n: num to be return the factorial from
 *
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

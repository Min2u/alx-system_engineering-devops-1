#include "main.h"

/**
 * _pow_recursion - the value of x raised to the power of y to be returns
 * @x: The value of rise
 * @Y: power
 *
 * Return: result of the power
 */

int _pow_recursion(int x, int Y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

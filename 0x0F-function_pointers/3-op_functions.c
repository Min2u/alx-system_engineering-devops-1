#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - The sum of 2 number returns.
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: Sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The difference of 2 numbers returns
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: Differece of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - The division of 2 numbers returns
 * @a: 1st number
 * @b: 2nd number
 *
 * Returns: Quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The reminder of the division of 2 numbers.
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: Reminder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}

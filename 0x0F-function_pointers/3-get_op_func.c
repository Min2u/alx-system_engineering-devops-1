#include <stdlib.h>
#include "3-clac.h"

/**
 * get_op_func - correct function to perform operation asked by the user selects
 * @s: Operator passed as argument.
 *
 * Return: A pointer to the function correspoing to the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}

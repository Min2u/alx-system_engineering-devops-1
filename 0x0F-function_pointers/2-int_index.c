#include "function_pointers.h"

/**
 * int_index - to return index place if comparision = true, eles -1.
 * @size: size of elements in array
 * @array: array
 * @cmp: pointer to func of one of the three in main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

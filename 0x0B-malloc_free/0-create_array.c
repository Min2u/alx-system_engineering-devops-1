#include "main.h"
#include <stdlib.h>

/**
 * create_array - crating array of size size and assign char c
 * @c: character of assign
 * @size: size of array
 * Description: Assign char c and creat array of size size
 * Return: pointer to array, NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
